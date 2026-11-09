// gml_Script____struct___382_gml_Object_oBossSplit_Create_0 @ 0x1407dc780

undefined8 *
gml_Script____struct___382_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@3119@___struct___382@gml_Object_oBossSplit_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x9f;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  FUN_140e87930(uVar1,DAT_141a1f230,0x80000000,&local_88);
  local_38 = 0xa0;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  FUN_140e87930(uVar1,DAT_141a09a38,0x80000000,&local_98);
  local_38 = 0xa1;
  uStack_60 = CONCAT44(0xd,(undefined4)uStack_60);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = uStack_60;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  FUN_140e87930(uVar1,DAT_141a09a68,0x80000000,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

