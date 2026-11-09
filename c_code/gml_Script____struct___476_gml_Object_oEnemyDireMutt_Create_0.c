// gml_Script____struct___476_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409bf400

undefined8 *
gml_Script____struct___476_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@4201@___struct___476@gml_Object_oEnemyDireMutt_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xec;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
  cVar3 = FUN_140e491e0(uVar4);
  bVar6 = cVar3 == '\0';
  if (bVar6) {
    local_7c = 0xf;
    local_88 = 0x100000100000107;
    puVar5 = &local_88;
  }
  else {
    uStack_6c = 0xf;
    local_78 = 0x100000100000106;
    puVar5 = &local_78;
  }
  uVar2 = uStack_6c;
  uVar1 = local_7c;
  local_68 = *(undefined4 *)puVar5;
  uStack_64 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_60 = *(undefined4 *)(puVar5 + 1);
  uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_68);
  if (bVar6) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  }
  if ((!bVar6) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_98);
  local_48 = 0xed;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_a8);
  local_48 = 0xee;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419f0ed8,0x80000000,&local_b8);
  local_48 = 0xef;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57de0);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar5) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  local_48 = 0xf1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

