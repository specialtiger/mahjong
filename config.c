root = "./"
thread = 8
logger = nil
harbor = 0
start = "client"
bootstrap = "snlua bootstrap"   -- The service for bootstrap
project_path = root.."mahjong/"
luaservice = root.."service/?.lua;"..project_path.."?.lua;"..project_path.."mod/?.lua;"..project_path.."test/?.lua"
lualoader = "lualib/loader.lua"
preload = "./mahjong/preload.lua"   -- run preload.lua before every lua service run
snax = project_path.."mod/?.lua"
cpath = root.."cservice/?.so"