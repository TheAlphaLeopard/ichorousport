// gml_Script_anon_3383_gml_Object_oGiveOffering_Draw_64 @ 0x140af7df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3383_gml_Object_oGiveOffering_Draw_64
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong **pplVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  double *pdVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  code *pcVar18;
  undefined1 **ppuVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  uint in_stack_fffffffffffffe30;
  longlong *local_1a8;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  double local_168;
  uint local_15c;
  double local_158;
  uint local_14c;
  double local_148;
  uint local_13c;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  char *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  
  local_f8 = "gml_Script_anon@606@gml_Object_oGiveOffering_Draw_64";
  local_100 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_100;
  local_f0 = 0x15;
  pcVar18 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f0 = 0x16;
  local_16c = 0xf;
  local_178 = (longlong *)0x100000000000106;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  FUN_140e87440(&local_178,DAT_141a57ae0,0x80000000,&local_110,
                (ulonglong)pcVar18 & 0xffffffffffffff00,in_stack_fffffffffffffe30);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  cVar1 = FUN_140e491e0(&local_110);
  bVar9 = cVar1 == '\0';
  if (bVar9) {
    local_16c = 0xf;
    local_178 = (longlong *)0x100000100000053;
    pplVar4 = &local_178;
  }
  else {
    uStack_19c = 0xf;
    local_1a8 = (longlong *)0x100000100000055;
    pplVar4 = &local_1a8;
  }
  uVar2 = local_16c;
  uVar21 = uStack_19c;
  local_128 = *pplVar4;
  uStack_120 = (char *)pplVar4[1];
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  if ((bVar9) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  if ((!bVar9) && ((1 << ((byte)uVar21 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_1a8);
  }
  local_b8 = local_e8;
  local_128 = (longlong *)CONCAT44(uRam00000001419eb8d4,_DAT_1419eb8d0);
  uStack_120 = (char *)CONCAT44(uRam00000001419eb8dc,uRam00000001419eb8d8);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_128);
  local_b0 = local_d8;
  local_128 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_120 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_128);
  local_a8 = local_c8;
  ppuVar19 = &local_b8;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_188,3,ppuVar19);
  local_f0 = 0x18;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05568);
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b78);
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57840);
  uStack_19c = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a728,0x80000000,&local_138,uVar20,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  uVar20 = uVar20 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0cfc8,0x80000000,&local_148,uVar20,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  uVar20 = uVar20 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_158,uVar20,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  in_stack_fffffffffffffe30 = in_stack_fffffffffffffe30 & 0xffffff00;
  uVar20 = uVar20 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_168,uVar20,in_stack_fffffffffffffe30);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uVar20 = uVar20 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f3418,0x80000000,&local_198,uVar20,
                in_stack_fffffffffffffe30 & 0xffffff00);
  uVar21 = (undefined4)(uVar20 >> 0x20);
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar8;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar8);
  }
  uVar2 = FUN_140e4a8b0(uVar7);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar6;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar6);
  }
  if ((local_18c & 0xffffff) == 0) {
    dVar12 = local_198;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_198);
  }
  dVar13 = local_198;
  if ((local_18c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_198);
  }
  dVar14 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_168);
  }
  dVar15 = local_158;
  if ((local_14c & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_158);
  }
  dVar16 = local_148;
  if ((local_13c & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_148);
  }
  dVar17 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar17 = (double)FUN_140e4b060(&local_138);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar17,(float)dVar16,(float)dVar15,CONCAT44(uVar21,(float)dVar14),
                (float)dVar13,(float)dVar12,(float)dVar11,uVar2,(float)dVar10);
  local_f0 = 0x1a;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50();
  }
  local_180 = 0;
  uStack_120 = "gml_Script_pal_swap_reset";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_17c = 5;
  local_188 = 0;
  local_118 = 0x71;
  iVar3 = FUN_140ec9d80();
  if (iVar3 != -1) {
    local_118 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_128;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_100;
  return param_3;
}

