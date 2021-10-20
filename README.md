# LocalCoOpTemplate

Developed with Unreal Engine 4

*Ver.1*
A basic starting point for games that want to support local multiplayer with split-screen. The project is built over the Third Person Template.

 *SpawnManager* is the C++ that it is responsable for spawning the right number of players. The class shows two possible spawning methods:
 
 - *SpawnPlayerDefault* spawns the same *APawn* for each player.
 - *SpawnPlayerCustom* spawns a different *APawn* for each player.

All fields can be edited through the blueprint class that derives from the *SpawnManager* class. 

![BlueprintSettings](https://lh3.googleusercontent.com/NQcRiD34ZL6t0_T184xaPU7WQwdwMMfN7YUBTEDhkWpc5HvZnlrqDtSClNmvbqnxCW0dxB_Tv0j7TE6lcvMUNoeFLrRhH8HCfV--6PSFoQ5IeIPknbHwa2QhQ5eybgc5Pd5RdUSjAvPzBTSoGJsRY2NlJhvsEDEdFeqTnRG5hpuSf_Ie6ss1XqvYLD09rbfrRm7bhEWu_jKLq9cebWfL5om0UbaqUjlelMzhqeHb8aVF3qP6WH6PRpaYtTZw_lVmI11-WBFs6BlkH7eTgSIZk-iMybYu39v5YhfkkmbtiEt48ZAl7xypnbxj3iEptBOeV1frsfF6z_DcyI6VoFYTPx_blR24E6i_CxsWoO9rkpeczK6_f2Oeu1S6fREGDBHCw-47zqDxVxRSzEpTQmC891jf3IFso5AmJfmykKuUyS5JlVzRIvju7QHcBN_iOdUcnXdbSj58iMuTm1OsVHn9_e7kR4zN3CkHa6Qpcq9HcJ_Y1qgcwWCd2sxPUqps4h0a5D1bTNq_9kxcOAeJy1TYntT83fz-egrPNkXqArTh-T_fBtEkSHMLK4PKwhMmSm41d049dH7wxUqq-iM1TfCx_k5PrB5xPvQj0TxrezDeDn-xP2C3fOgubEavxhWJ1EACT0XgY0NGvjp8wKnJnyVQ8Dubl5JeHq5mMuGnx7kTgeQSHEDKPYmsM0adInIbucp_RsWKzdsiQHjFSM02eh1GpVt4=w490-h337-no?authuser=0)

![enter image description here](https://lh3.googleusercontent.com/j4FWOl7ljFf7e3_VYWgla5_8MRubi0NEXCJwMuc6W-LWhK8vlxVj-WD1w8g9LIh_pdDDZoOf68c2r0EtlxrxybGY78J5bS2onEVlc5iFvwQpIMhItB74UZvVBy610yHoMESUaSCssbOkhit28o0j7_jurc0-FfcJy7OyzhNeC812INyxq2kNdA33nARGQH1ezJ9YwsSZxO4GstEGYA3ldgvuUZGHAWwsldBe-hMwKErDG366kabSfV9tPUC7aENkwJZdoKldZ4aiwcq-MG8SAEuCHWkmxN_BDX93LLtja2j0s33u1f-Ws0wvLjluSMqZG4MYSI1sXzMAX-4541Liawffkhe_G8OvOKzyaiSzvZkbrRzRSOW3--2_ofYORXIVpmcpignkzJlEPTBy68VxCBxnuIVcIcRxlwftgEGGwftZ2xJnluqMrmx5swIVsDCtF6-TaQSp6oNBoeYpUkOHfLSkunaeHlbNj1dr5lTaSCMgGgkBEl5_nmad53ewXycFnngxppj0VxP9ZQcPE6uhdhMIayuaYnjjgx83-opRHlPFDAqjEbOdJzg4Ij8RDEylnOAvwpiwkh4Igmm4j2AVkF-mA18-iRB9wyUdhr5Le8awO0CSeKsEpq3_uo4uXKTeQ8TyUP78wbXp9SM2BrSfzaHyfp2YTOMgQks2dww5rxnqZ1FVY9m7WC5Q4co3lcVBfJistaUQ2oEmwVUl480vdKRp=w1228-h550-no?authuser=0)

You can make this project a template for your Unreal Engine installation following: https://docs.unrealengine.com/4.27/en-US/Basics/Projects/CreatingTemplates/
