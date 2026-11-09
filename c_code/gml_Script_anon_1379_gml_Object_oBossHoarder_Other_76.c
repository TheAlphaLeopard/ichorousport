// gml_Script_anon_1379_gml_Object_oBossHoarder_Other_76 @ 0x140799470

undefined8 *
gml_Script_anon_1379_gml_Object_oBossHoarder_Other_76
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res8;
  ulonglong local_res10;
  code *pcVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffe60;
  longlong *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_120 = "gml_Script_anon@46@gml_Object_oBossHoarder_Other_76";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 2;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 4;
  uStack_190._4_4_ = 6;
  local_198 = local_res8;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_168,uVar12,in_stack_fffffffffffffe60);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_190._4_4_ = 6;
  local_198 = local_res8;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_178,uVar12 & 0xffffffffffffff00,
                in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_190._4_4_ = 0xf;
  local_198 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_198,DAT_1419fe0e8,0x80000000,&local_138,local_res8,local_res10);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_190._4_4_ = 0xf;
  local_198 = (longlong *)0x1000000000000ee;
  plVar13 = local_res8;
  uVar12 = local_res10;
  FUN_140e87170(&local_198,DAT_1419fe158,0x80000000,&local_148,local_res8,local_res10);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  dVar7 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar7 = (double)FUN_140e4b060(&local_148);
  }
  dVar8 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_138);
  }
  plVar9 = local_178;
  if ((uStack_16c & 0xffffff) != 0) {
    plVar9 = (longlong *)FUN_140e4b060(&local_178);
  }
  plVar10 = local_168;
  if ((uStack_15c & 0xffffff) != 0) {
    plVar10 = (longlong *)FUN_140e4b060(&local_168);
  }
  fVar6 = (float)FUN_140e793d0((float)(double)plVar10,(float)(double)plVar9,(float)dVar8,
                               (float)dVar7);
  uStack_fc = 0;
  local_108 = (longlong *)(double)fVar6;
  local_118 = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uStack_190._4_4_ = 6;
  local_198 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar14 = (ulonglong)plVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_168,uVar14,uVar12);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_190._4_4_ = 6;
  local_198 = local_res8;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_178,uVar14,uVar12);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_190._4_4_ = 6;
  local_198 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_141a1b910,0x80000000,&local_f8,uVar14,uVar12 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar14 >> 0x20);
  if ((1 << ((byte)uStack_190._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = local_168;
  uStack_190 = CONCAT44(uStack_15c,uStack_160);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_98 = local_e8;
  local_198 = local_178;
  uStack_190 = CONCAT44(uStack_16c,uStack_170);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_198);
  local_90 = local_d8;
  local_198 = local_f8;
  uStack_190 = CONCAT44(uStack_ec,uStack_f0);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_198);
  uStack_190 = CONCAT44(0xf,(undefined4)uStack_190);
  local_198 = (longlong *)0x1000000000000f5;
  local_a8 = (longlong *)0x1000000000000f5;
  uStack_a0 = CONCAT44(0xf,(undefined4)uStack_190);
  local_88 = local_c8;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_a8);
  local_80 = local_b8;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_188,4,CONCAT44(uVar15,DAT_141a0a7c8),&local_98
                       );
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar3);
  plVar13 = local_108;
  if (0 < iVar2) {
    uVar3 = CONCAT44(uStack_fc,uStack_100);
    local_198 = local_108;
    uStack_190 = uVar3;
    do {
      local_118 = 7;
      pplVar4 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
      FUN_140e609c0(local_res8);
      if (&local_108 != pplVar4) {
        local_a8 = plVar13;
        uStack_a0 = uVar3;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar4);
        }
        FUN_140041b80(pplVar4,&local_a8);
      }
      FUN_140e60910(1);
      local_118 = 8;
      puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f290);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0x4014000000000000;
      local_118 = 9;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_198);
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_158);
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

