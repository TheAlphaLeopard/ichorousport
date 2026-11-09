// gml_Script____struct___459_gml_Object_oEnemyDamsel_Create_0 @ 0x14097f5a0

undefined8 *
gml_Script____struct___459_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 uStack_44;
  
  local_70 = "gml_Script_anon@6958@___struct___459@gml_Object_oEnemyDamsel_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x120;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0868);
  cVar3 = FUN_140e491e0(uVar4);
  bVar7 = cVar3 == '\0';
  if (bVar7) {
    local_54 = 0xf;
    local_60 = 0x1000001000000d6;
    puVar6 = &local_60;
  }
  else {
    uStack_44 = 0xf;
    local_50 = 0x1000001000000d7;
    puVar6 = &local_50;
  }
  uVar2 = uStack_44;
  uVar1 = local_54;
  local_88 = *(undefined4 *)puVar6;
  uStack_84 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_80 = *(undefined4 *)(puVar6 + 1);
  uStack_7c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_88);
  if (bVar7) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
  }
  if ((!bVar7) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_50);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_98);
  local_68 = 0x121;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = FUN_140e79480(0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = uVar4;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_a8);
  local_68 = 0x122;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f05f8);
  if (puVar6 != &local_b8) {
    local_88 = *(undefined4 *)puVar6;
    uStack_84 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_80 = *(undefined4 *)(puVar6 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_88);
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419f0768,0x80000000,&local_b8);
  local_68 = 0x123;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0628);
  if (puVar6 != &local_c8) {
    local_88 = *(undefined4 *)puVar6;
    uStack_84 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_80 = *(undefined4 *)(puVar6 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_88);
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419f0588,0x80000000,&local_c8);
  local_68 = 0x124;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419f0618,0x80000000,&local_d8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

