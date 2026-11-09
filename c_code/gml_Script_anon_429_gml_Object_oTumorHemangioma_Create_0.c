// gml_Script_anon_429_gml_Object_oTumorHemangioma_Create_0 @ 0x140de5030

void gml_Script_anon_429_gml_Object_oTumorHemangioma_Create_0(longlong *param_1,ulonglong param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  code *pcVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong in_stack_fffffffffffffd60;
  undefined4 uVar19;
  ulonglong uVar18;
  longlong *local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  longlong *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  longlong *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  double local_248;
  uint local_23c;
  double local_238;
  uint local_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  uint local_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  longlong *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  double local_170;
  uint local_164;
  double local_160;
  uint local_154;
  double local_150;
  uint local_144;
  double local_140;
  uint local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined1 local_118 [32];
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  double local_d8;
  byte local_cc;
  double *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  double *local_a8 [16];
  
  local_1b0 = "gml_Object_oTumor_Draw_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = (longlong *)0x0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_194 = 0xffffff;
  local_1a0 = (longlong *)0x0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  uStack_1cc = 0xffffff;
  local_1d8 = (longlong *)0x0;
  uStack_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_164 = 0xffffff;
  local_170 = 0.0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1bc = 0;
  local_1c8 = 0x3f9eb851eb851eb8;
  local_1a8 = 3;
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  pdVar2 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
  FUN_140e609c0(param_1);
  uStack_24c = *(uint *)((longlong)pdVar1 + 0xc);
  uStack_250 = *(undefined4 *)(pdVar1 + 1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_258 = (longlong *)*pdVar1;
  }
  else {
    FUN_1400419b0(&local_258,pdVar1);
  }
  uStack_25c = 7;
  local_268 = (longlong *)CONCAT44(local_268._4_4_,0x41);
  FUN_1400460e0(&local_258,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_26c = uStack_24c;
  uStack_270 = uStack_250;
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
    local_278 = local_258;
  }
  else {
    FUN_1400419b0(&local_278,&local_258);
  }
  FUN_140042560(&local_278,&local_1c8);
  if ((uStack_26c & 0xffffff) == 0) {
    uVar5 = SUB84(local_278,0);
  }
  else {
    uVar5 = FUN_140e4b060(&local_278);
  }
  dVar8 = (double)thunk_FUN_1412aae80(uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar2);
  }
  *(undefined4 *)((longlong)pdVar2 + 0xc) = 0;
  *pdVar2 = dVar8 * 6.0;
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140e60910(1);
  local_1a8 = 5;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0xbfa47ae147ae147b;
  local_1a8 = 6;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_174 = 0;
  local_180 = 0x4010000000000000;
  local_1a8 = 7;
  pplVar3 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
  FUN_140e609c0(param_1);
  uStack_26c = *(uint *)((longlong)pdVar1 + 0xc);
  uStack_270 = *(undefined4 *)(pdVar1 + 1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)*pdVar1;
  }
  else {
    FUN_1400419b0(&local_278,pdVar1);
  }
  FUN_140042560(&local_278,&local_1c8);
  if ((uStack_26c & 0xffffff) == 0) {
    uVar5 = SUB84(local_278,0);
  }
  else {
    uVar5 = FUN_140e4b060(&local_278);
  }
  local_258 = (longlong *)thunk_FUN_1412ac390(uVar5);
  uStack_24c = 0;
  FUN_140042560(&local_258,&local_180);
  if (&local_258 != pplVar3) {
    local_268 = local_258;
    uStack_260 = uStack_250;
    uStack_25c = uStack_24c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar3);
    }
    FUN_140041b80(pplVar3,&local_268);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140e60910(1);
  local_1a8 = 9;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
  uStack_25c = 6;
  in_stack_fffffffffffffd60 = in_stack_fffffffffffffd60 & 0xffffffffffffff00;
  uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_190,uVar16,in_stack_fffffffffffffd60);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_26c = local_184;
  uStack_270 = local_188;
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) == 0) {
    local_278 = local_190;
  }
  else {
    FUN_1400419b0(&local_278,&local_190);
  }
  FUN_1400460e0(&local_278,uVar4);
  local_268 = local_278;
  uStack_260 = uStack_270;
  uStack_25c = uStack_26c;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_268);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_1a8 = 10;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
  uStack_25c = 6;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_1a0,uVar16 & 0xffffffffffffff00,
                in_stack_fffffffffffffd60 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_26c = local_194;
  uStack_270 = local_198;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) == 0) {
    local_278 = local_1a0;
  }
  else {
    FUN_1400419b0(&local_278,&local_1a0);
  }
  FUN_1400460e0(&local_278,uVar4);
  local_268 = local_278;
  uStack_260 = uStack_270;
  uStack_25c = uStack_26c;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_268);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_1a8 = 0xc;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3468);
  (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
  plVar10 = param_1;
  FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_1e8,param_1,param_2);
  uVar5 = (undefined4)((ulonglong)plVar10 >> 0x20);
  local_c8 = &local_238;
  local_c0 = &local_248;
  local_268 = local_1d8;
  uStack_260 = uStack_1d0;
  uStack_25c = uStack_1cc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_268);
  local_b8 = local_f8;
  local_268 = local_1e8;
  uStack_260 = uStack_1e0;
  uStack_25c = uStack_1dc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_268);
  local_b0 = local_e8;
  if (pdVar1 != &local_d8) {
    local_268 = (longlong *)*pdVar1;
    uStack_260 = *(undefined4 *)(pdVar1 + 1);
    uStack_25c = *(uint *)((longlong)pdVar1 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_268);
  }
  local_a8[0] = &local_d8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_218,1,CONCAT44(uVar5,DAT_141a047c8),local_a8);
  pdVar2 = (double *)FUN_140e634e0(param_1,param_2,&local_208,4,DAT_1419fd548,&local_c8);
  uStack_26c = *(undefined4 *)((longlong)pdVar2 + 0xc);
  uStack_270 = *(undefined4 *)(pdVar2 + 1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)*pdVar2;
  }
  else {
    FUN_1400419b0(&local_278,pdVar2);
  }
  FUN_140046500(&local_278,uVar4);
  local_268 = local_278;
  uStack_260 = uStack_270;
  uStack_25c = uStack_26c;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_268);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_1a8 = 0xd;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_1d8,param_1,param_2);
  plVar17 = param_1;
  FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_1e8,param_1,param_2);
  plVar10 = local_1e8;
  if ((uStack_1dc & 0xffffff) != 0) {
    plVar10 = (longlong *)FUN_140e4b060(&local_1e8);
  }
  plVar7 = local_1d8;
  if ((uStack_1cc & 0xffffff) != 0) {
    plVar7 = (longlong *)FUN_140e4b060(&local_1d8);
  }
  dVar8 = local_248;
  if ((local_23c & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_248);
  }
  dVar9 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_238);
  }
  fVar6 = (float)FUN_140e793d0((float)dVar9,(float)dVar8,(float)(double)plVar7,
                               (float)(double)plVar10);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_228 = (double)fVar6;
  local_1a8 = 0xf;
  uStack_25c = 6;
  param_2 = param_2 & 0xffffffffffffff00;
  uVar16 = (ulonglong)plVar17 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0fbc8,0x80000000,&local_140,uVar16,param_2);
  uVar5 = (undefined4)(uVar16 >> 0x20);
  uVar19 = (undefined4)(param_2 >> 0x20);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  dVar8 = local_140;
  if ((local_134 & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_140);
  }
  dVar9 = local_228;
  if ((local_21c & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_228);
  }
  dVar11 = local_1f8;
  if ((local_1ec & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_1f8);
  }
  dVar12 = local_248;
  if ((local_23c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_248);
  }
  dVar13 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_238);
  }
  if ((*(uint *)((longlong)pdVar1 + 0xc) & 0xffffff) == 0) {
    dVar14 = *pdVar1;
  }
  else {
    dVar14 = (double)FUN_140e4b060(pdVar1);
  }
  uVar18 = CONCAT44(uVar19,(float)dVar11);
  uVar16 = CONCAT44(uVar5,(float)dVar12);
  FUN_140ec5dd0(param_1,(longlong)dVar14,0,(float)dVar13,uVar16,uVar18,0x3f800000,(float)dVar9,
                0xffffff,(float)dVar8);
  local_1a8 = 0x10;
  pdVar1 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uStack_25c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a728,0x80000000,&local_150,uVar16,uVar18);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0cfc8,0x80000000,&local_160,uVar16,uVar18);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0f7f8,0x80000000,&local_130,uVar16,uVar18);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0f938,0x80000000,&local_170,uVar16,uVar18);
  uVar5 = (undefined4)(uVar16 >> 0x20);
  uVar19 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_26c = *(uint *)((longlong)pdVar1 + 0xc);
  uStack_270 = *(undefined4 *)(pdVar1 + 1);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
    local_278 = (longlong *)*pdVar1;
  }
  else {
    FUN_1400419b0(&local_278,pdVar1);
  }
  FUN_140042560(&local_278,&local_130);
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar2;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar2);
  }
  dVar9 = local_170;
  if ((local_164 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_170);
  }
  plVar10 = local_278;
  if ((uStack_26c & 0xffffff) != 0) {
    plVar10 = (longlong *)FUN_140e4b060(&local_278);
  }
  dVar11 = local_248;
  if ((local_23c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_248);
  }
  dVar12 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_238);
  }
  dVar13 = local_160;
  if ((local_154 & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_160);
  }
  dVar14 = local_150;
  if ((local_144 & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_150);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar14,(float)dVar13,(float)dVar12,CONCAT44(uVar5,(float)dVar11),
                CONCAT44(uVar19,(float)(double)plVar10),(float)dVar9,(float)dVar8,0xffffff,
                0x3f800000);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

