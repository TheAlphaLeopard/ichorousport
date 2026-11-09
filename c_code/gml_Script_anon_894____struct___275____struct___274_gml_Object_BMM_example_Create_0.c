// gml_Script_anon_894____struct___275____struct___274_gml_Object_BMM_example_Create_0 @ 0x1406797b0

undefined8 *
gml_Script_anon_894____struct___275____struct___274_gml_Object_BMM_example_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___273@___struct___272@gml_Object_BMM_example_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x19;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0fc0) {
    _Init_thread_header(&DAT_141de0fc0);
    if (DAT_141de0fc0 == -1) {
      DAT_141de0fb8 = FUN_140e63aa0(DAT_141a01918);
      _Init_thread_footer(&DAT_141de0fc0);
    }
  }
  FUN_140e643a0(param_1,DAT_141de0fb8);
  local_18 = 0x1a;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a467b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script____struct___272_gml_Object_BMM_example_Create_0,param_1);
  if (&local_48 != puVar1) {
    local_38 = local_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

