// gml_Script_anon_3212____struct___557_gml_Object_oEntity_Create_0 @ 0x140aaaaf0

undefined8 *
gml_Script_anon_3212____struct___557_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2831@___struct___557@gml_Object_oEntity_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xb1;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11d08);
  uVar4 = 0;
  FUN_140e63610(param_1,param_2,&local_a8,0,uVar1,0);
  local_38 = 0xb3;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87440(uVar2,DAT_141a0a928,0x80000000,&local_68,uVar1 & 0xffffffffffffff00,
                uVar4 & 0xffffffffffffff00);
  uVar2 = FUN_140069500(uVar2);
  puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_a8,0,&local_68,0);
  if (puVar3 != &local_78) {
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_38 = 0xb4;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_38 = 0xb6;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87930(uVar2,DAT_141a1dce0,0x80000000,&local_98);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

