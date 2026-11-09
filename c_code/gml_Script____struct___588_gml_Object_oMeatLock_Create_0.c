// gml_Script____struct___588_gml_Object_oMeatLock_Create_0 @ 0x140b5fe70

undefined8 *
gml_Script____struct___588_gml_Object_oMeatLock_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  
  local_40 = "gml_Script_anon@4096@___struct___588@gml_Object_oMeatLock_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xdf;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  uStack_60 = CONCAT44(0xd,(undefined4)uStack_60);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = uStack_60;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  FUN_140e87930(uVar1,DAT_141a09638,0x80000000,&local_78);
  local_38 = 0xe0;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87930(uVar1,DAT_141a1dce0,0x80000000,&local_88);
  local_38 = 0xe1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04ba8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a574b0);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar3) {
    local_58 = *puVar2;
    uStack_50 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0xe2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x405e000000000000;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

