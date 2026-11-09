// gml_Script____struct___396_gml_Object_oBossThePest_Create_0 @ 0x140812d20

undefined8 *
gml_Script____struct___396_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  undefined8 local_b8;
  undefined4 local_ac;
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
  
  local_50 = "gml_Script_anon@4081@___struct___396@gml_Object_oBossThePest_Create_0";
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
  local_48 = 0xfa;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09ba8);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09ba8);
  cVar3 = FUN_140e491e0(uVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar5);
  }
  *(undefined4 *)((longlong)plVar5 + 0xc) = 0xd;
  if (cVar3 == '\0') {
    uVar8 = 0x3ff00000;
  }
  else {
    uVar8 = 0;
  }
  *plVar5 = (ulonglong)uVar8 << 0x20;
  local_48 = 0xfc;
  cVar3 = FUN_140e491e0(uVar4);
  bVar7 = cVar3 == '\0';
  if (bVar7) {
    local_7c = 0xf;
    local_88 = 0x10000010000034f;
    puVar6 = &local_88;
  }
  else {
    uStack_6c = 0xf;
    local_78 = 0x10000010000036d;
    puVar6 = &local_78;
  }
  uVar2 = uStack_6c;
  uVar1 = local_7c;
  local_68 = *(undefined4 *)puVar6;
  uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_60 = *(undefined4 *)(puVar6 + 1);
  uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_68);
  if (bVar7) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  }
  if ((!bVar7) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_98);
  local_48 = 0xfd;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_48 = 0xff;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = 0;
  local_48 = 0x100;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a09ba8);
  FUN_140e87930(uVar4,DAT_141a0a748,0x80000000,&local_b8);
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

