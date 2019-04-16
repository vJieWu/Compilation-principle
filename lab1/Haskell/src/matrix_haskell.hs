import Control.DeepSeq
import System.IO
import Text.Printf
import Text.Show
import System.CPUTime

gethead x = [head|head:tail <- x]
gettail x = [tail|head:tail <- x, not (null tail)]
matXvec matrix vector = sum(zipWith (*) (gethead matrix) vector):matXvec (gettail matrix) vector

main = do
    --read vector
    vector_file <- readFile"vector.txt"
    let vector_init = map (read::String->Int) (words vector_file)
    
    --read and convert matrix
    matrix_file <- readFile"matrix.txt"
    let matrix_list = lines matrix_file
    let matrix = [map (read::String->Int) (words string) | string <- matrix_list]
    
    --record time
    start_time <- getCPUTime
    let vector_result = matXvec matrix vector_init 
    end_time <- getCPUTime

    --show result and time
    --print vector_result
    --printf "\n"
    let time = fromIntegral (end_time - start_time) / (10^9)
    printf "Caculating Time: %0.3f ms\n"  (time :: Double)