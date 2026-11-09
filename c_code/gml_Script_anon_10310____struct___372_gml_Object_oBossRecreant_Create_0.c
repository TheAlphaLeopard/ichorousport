// gml_Script_anon_10310____struct___372_gml_Object_oBossRecreant_Create_0 @ 0x1407c60d0

undefined8 *
gml_Script_anon_10310____struct___372_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  byte bVar6;
  longlong **pplVar7;
  bool bVar8;
  longlong *plVar9;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  local_b0 = "gml_Script_anon@7417@___struct___372@gml_Object_oBossRecreant_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_74 = 0xffffff;
  local_80 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x164;
  uStack_110 = CONCAT44(0xf,(undefined4)uStack_110);
  local_118 = (longlong *)0x10000010000028b;
  local_128 = (longlong *)0x10000010000028b;
  uStack_120 = CONCAT44(0xf,(undefined4)uStack_110);
  FUN_140041b80(&local_80,&local_128);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_80);
  local_a8 = 0x165;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d8);
  local_a8 = 0x166;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e8);
  local_a8 = 0x168;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_a8 = 0x16a;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_f8);
  local_a8 = 0x16b;
  uStack_110 = CONCAT44(0xd,(undefined4)uStack_110);
  local_118 = (longlong *)0x0;
  local_128 = (longlong *)0x0;
  uStack_120 = uStack_110;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_128);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a09408,0x80000000,&local_c8);
  local_a8 = 0x16c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0xc010000000000000;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_1419f6278,0x80000000,&local_108);
  local_a8 = 0x16f;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  pplVar5 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  plVar9 = param_1;
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_90,param_1,param_2);
  uStack_120._4_4_ = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_a0,(ulonglong)plVar9 & 0xffffffffffffff00
                ,param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_120._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  iVar2 = FUN_140e851f0(&local_90,&local_a0,DAT_141955260,1);
  bVar8 = iVar2 == -2 || -1 < iVar2;
  if (bVar8) {
    uStack_120._4_4_ = 0;
    local_128 = (longlong *)0x3ff0000000000000;
    pplVar7 = &local_128;
    bVar6 = uStack_110._4_1_;
  }
  else {
    uStack_110 = uStack_110 & 0xffffffff;
    local_118 = (longlong *)&DAT_bff0000000000000;
    pplVar7 = &local_118;
    bVar6 = 0;
  }
  uVar1 = uStack_120._4_4_;
  FUN_140e609c0(param_1);
  if (pplVar7 != pplVar5) {
    local_70 = *(undefined4 *)pplVar7;
    uStack_6c = *(undefined4 *)((longlong)pplVar7 + 4);
    uStack_68 = *(undefined4 *)(pplVar7 + 1);
    uStack_64 = *(undefined4 *)((longlong)pplVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar5);
    }
    FUN_140041b80(pplVar5,&local_70);
  }
  if ((bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  if ((iVar2 != -2 && -1 >= iVar2) && ((1 << (bVar6 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

