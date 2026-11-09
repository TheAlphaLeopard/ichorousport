// gml_Script____struct___473_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409bce80

undefined8 *
gml_Script____struct___473_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@2751@___struct___473@gml_Object_oEnemyDireMutt_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x8a;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
  cVar3 = FUN_140e491e0(uVar4);
  bVar7 = cVar3 == '\0';
  if (bVar7) {
    uStack_ac = 0xf;
    local_b8 = 0x100000100000107;
    puVar5 = &local_b8;
  }
  else {
    uStack_6c = 0xf;
    local_78 = 0x100000100000106;
    puVar5 = &local_78;
  }
  uVar2 = uStack_6c;
  uVar1 = uStack_ac;
  local_68 = *(undefined4 *)puVar5;
  uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_60 = *(undefined4 *)(puVar5 + 1);
  uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_68);
  if (bVar7) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  if (!bVar7) {
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_48 = 0x8b;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_98);
  local_48 = 0x8c;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_a8);
  local_48 = 0x8e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a11ee8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
  FUN_140e609c0(param_1);
  uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_b8,puVar5);
  }
  uStack_6c = 7;
  local_78 = CONCAT44(local_78._4_4_,0x14);
  FUN_1400462a0(&local_b8,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (&local_b8 != puVar6) {
    local_68 = (undefined4)local_b8;
    uStack_64 = local_b8._4_4_;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_68);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

