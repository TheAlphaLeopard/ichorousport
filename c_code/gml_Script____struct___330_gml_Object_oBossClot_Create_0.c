// gml_Script____struct___330_gml_Object_oBossClot_Create_0 @ 0x140703d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___330_gml_Object_oBossClot_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  byte bVar7;
  bool bVar8;
  undefined1 *local_res18 [2];
  longlong *plVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
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
  undefined1 local_70 [12];
  byte local_64;
  
  local_e0 = "gml_Script_anon@8310@___struct___330@gml_Object_oBossClot_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x194;
  _eh_vector_constructor_iterator_(local_70,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x196;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_12c = 0xf;
  local_138 = (longlong *)0x1000000000000ee;
  plVar9 = param_1;
  uVar11 = param_2;
  FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_80,param_1,param_2);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_90,(ulonglong)plVar9 & 0xffffffffffffff00
                ,uVar11);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  iVar3 = FUN_140e851f0(&local_80,&local_90,DAT_141955260,1);
  bVar8 = iVar3 == -2 || -1 < iVar3;
  if (bVar8) {
    uStack_12c = 0;
    local_138 = (longlong *)0x3ff0000000000000;
    pplVar6 = &local_138;
    bVar7 = uStack_120._4_1_;
  }
  else {
    uStack_120 = uStack_120 & 0xffffffff;
    local_128 = (longlong *)&DAT_bff0000000000000;
    pplVar6 = &local_128;
    bVar7 = 0;
  }
  uVar1 = uStack_12c;
  local_f8 = *pplVar6;
  uStack_f0 = pplVar6[1];
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_f8);
  if ((bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((iVar3 != -2 && -1 >= iVar3) && ((1 << (bVar7 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  FUN_140e87930(uVar4,DAT_141a1eed0,0x80000000,&local_108);
  local_d8 = 0x198;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  local_f8 = (longlong *)CONCAT44(uRam00000001419e7c74,_DAT_1419e7c70);
  uStack_f0 = (longlong *)CONCAT44(uRam00000001419e7c7c,uRam00000001419e7c78);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_f8);
  local_res18[0] = local_70;
  ppuVar10 = local_res18;
  uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_118,1,ppuVar10);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_d8 = 0x198;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar11 = uVar11 & 0xffffffffffffff00;
    ppuVar10 = (undefined1 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a1eed0,0x80000000,&local_108,ppuVar10,uVar11);
    uStack_120 = uStack_120 & 0xffffffff;
    local_128 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(&local_108,&local_128);
    if ((1 << ((byte)(uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e87930(uVar4,DAT_141a1eed0,0x80000000,&local_108);
  }
  local_d8 = 0x19a;
  uStack_120 = CONCAT44(0xd,(undefined4)uStack_120);
  local_128 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  uStack_f0 = (longlong *)uStack_120;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_f8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a06588,0x80000000,&local_b0);
  local_d8 = 0x19b;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_c0);
  local_d8 = 0x19c;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a06608,0x80000000,&local_d0);
  local_d8 = 0x19e;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  uStack_120 = uStack_120 & 0xffffffff;
  local_128 = (longlong *)0x3fe0000000000000;
  FUN_140042560(&local_138,&local_128);
  if ((1 << ((byte)(uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (&local_138 != pplVar6) {
    local_f8 = local_138;
    uStack_f0 = (longlong *)CONCAT44(uStack_12c,uStack_130);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_f8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_d8 = 0x19f;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_138,puVar5);
  }
  uStack_120 = uStack_120 & 0xffffffff;
  local_128 = (longlong *)0x3ff8000000000000;
  FUN_140042560(&local_138,&local_128);
  if ((1 << ((byte)(uStack_120 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (&local_138 != pplVar6) {
    local_f8 = local_138;
    uStack_f0 = (longlong *)CONCAT44(uStack_12c,uStack_130);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_f8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_d8 = 0x1a1;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06538);
  FUN_140e87440(uVar4,DAT_1419f4a98,0x80000000,&local_a0,(ulonglong)ppuVar10 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  FUN_140e63610(uVar4,param_2,&local_118,0,&local_a0,0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

