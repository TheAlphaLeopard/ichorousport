// gml_Script____struct___397_gml_Object_oBossThePest_Create_0 @ 0x1408138e0

undefined8 *
gml_Script____struct___397_gml_Object_oBossThePest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  bool bVar7;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 local_3c;
  
  local_80 = "gml_Script_anon@4610@___struct___397@gml_Object_oBossThePest_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x11c;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x3ff0000000000000;
  local_78 = 0x11e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09ba8);
  cVar3 = FUN_140e491e0(uVar5);
  bVar7 = cVar3 == '\0';
  if (bVar7) {
    local_3c = 0xf;
    local_48 = (longlong *)0x10000010000036d;
    pplVar6 = &local_48;
  }
  else {
    uStack_cc = 0xf;
    local_d8 = (longlong *)0x10000010000037a;
    pplVar6 = &local_d8;
  }
  uVar2 = local_3c;
  uVar1 = uStack_cc;
  local_58 = *(undefined4 *)pplVar6;
  uStack_54 = *(undefined4 *)((longlong)pplVar6 + 4);
  uStack_50 = *(undefined4 *)(pplVar6 + 1);
  uStack_4c = *(undefined4 *)((longlong)pplVar6 + 0xc);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_58);
  if (bVar7) {
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
  }
  if ((!bVar7) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_98);
  local_78 = 0x11f;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b8);
  local_78 = 0x121;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_78 = 0x122;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  FUN_140e87930(uVar5,DAT_141a0a748,0x80000000,&local_c8);
  local_78 = 0x123;
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0a828,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_58);
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x100000000000058;
  FUN_140e87930(&local_d8,DAT_141a1f440,0x80000000,&local_a8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_78 = 0x124;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09ba8);
  uStack_cc = 0xd;
  local_d8 = (longlong *)0x3ff0000000000000;
  if (&local_d8 != pplVar6) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_d0;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

