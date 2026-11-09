// gml_Script_anon_1806____struct___801_gml_Object_oSympathyBlade_Create_0 @ 0x140da9d80

undefined8 *
gml_Script_anon_1806____struct___801_gml_Object_oSympathyBlade_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = 
  "gml_Script____struct___802@anon@997@___struct___801@gml_Object_oSympathyBlade_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x5d;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de36c4) {
    _Init_thread_header(&DAT_141de36c4);
    if (DAT_141de36c4 == -1) {
      DAT_141de3698 = FUN_140e63aa0(DAT_141a013b8);
      _Init_thread_footer(&DAT_141de36c4);
    }
  }
  FUN_140e643a0(param_1,DAT_141de3698);
  local_18 = 0x5d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a573b0);
  uStack_3c = 0xd;
  local_48 = 0x3ff0000000000000;
  if (&local_48 != puVar1) {
    local_38 = 0;
    uStack_34 = 0x3ff00000;
    uStack_30 = uStack_40;
    uStack_2c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

