// gml_Script_anon_3546____struct___532_gml_Object_oEnemySlime_Create_0 @ 0x140a770d0

undefined8 *
gml_Script_anon_3546____struct___532_gml_Object_oEnemySlime_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  byte bVar6;
  bool bVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  longlong *local_68;
  longlong *plStack_60;
  
  local_d0 = "gml_Script_anon@2381@___struct___532@gml_Object_oEnemySlime_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x7a;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  local_fc = 0xf;
  local_108 = (longlong *)0x1000000000000ee;
  plVar8 = param_1;
  uVar10 = param_2;
  FUN_140e87170(&local_108,DAT_1419fe0e8,0x80000000,&local_80,param_1,param_2);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_90,uVar9,uVar10);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  iVar2 = FUN_140e851f0(&local_80,&local_90,DAT_141955260,1);
  bVar7 = iVar2 == -2 || -1 < iVar2;
  if (bVar7) {
    local_fc = 0;
    local_108 = (longlong *)0x3ff0000000000000;
    pplVar4 = &local_108;
    bVar6 = uStack_120._4_1_;
  }
  else {
    uStack_120 = uStack_120 & 0xffffffff;
    local_128 = (longlong *)&DAT_bff0000000000000;
    pplVar4 = &local_128;
    bVar6 = 0;
  }
  uVar1 = local_fc;
  local_68 = *pplVar4;
  plStack_60 = pplVar4[1];
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_68);
  if ((bVar7) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  if ((iVar2 != -2 && -1 >= iVar2) && ((1 << (bVar6 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  FUN_140e87930(uVar3,DAT_141a1eed0,0x80000000,&local_f8);
  local_c8 = 0x7c;
  uStack_120._4_4_ = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0a728,0x80000000,&local_a0,uVar9,uVar10);
  if ((1 << ((byte)uStack_120._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_120._4_4_ = 0xf;
  local_128 = (longlong *)0x1000001000002cf;
  iVar2 = FUN_140e851f0(&local_a0,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_120._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar2 == 0) {
    local_c8 = 0x7d;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a1eed0,0x80000000,&local_f8,uVar9,uVar10);
    uStack_120._4_4_ = 0;
    local_128 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(&local_f8,&local_128);
    if ((1 << ((byte)uStack_120._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e87930(uVar3,DAT_141a1eed0,0x80000000,&local_f8);
  }
  local_c8 = 0x7f;
  uStack_120 = CONCAT44(0xd,(undefined4)uStack_120);
  local_128 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  plStack_60 = (longlong *)uStack_120;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_68);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a06588,0x80000000,&local_c0);
  local_c8 = 0x80;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_e8);
  local_c8 = 0x82;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3fe0000000000000;
  local_c8 = 0x83;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3ff8000000000000;
  local_c8 = 0x84;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f03d8);
  FUN_140e87440(uVar3,DAT_1419f4a98,0x80000000,&local_b0,uVar9 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_118,0,&local_b0,0);
  local_c8 = 0x86;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  FUN_140e63610(param_1,param_2,&local_118,0,uVar3,0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

