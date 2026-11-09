// gml_Script_anon_1776____struct___575_gml_Object_oHitable_Create_0 @ 0x140b09080

undefined8 *
gml_Script_anon_1776____struct___575_gml_Object_oHitable_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@1598@___struct___574@gml_Object_oHitable_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x53;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0;
  local_58 = 0;
  FUN_140e86c30(uVar1,DAT_1419fe0e8,0x80000000,&local_58);
  local_38 = 0x54;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff808);
  FUN_140e86c30(uVar1,DAT_1419fe158,0x80000000,&local_68);
  local_38 = 0x55;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

