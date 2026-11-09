// gml_Script____struct___604_anon_123_gml_Object_oParticleManager_Create_0 @ 0x140bc2ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___604_anon_123_gml_Object_oParticleManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  code *pcVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  uint in_stack_fffffffffffffe50;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  double local_160;
  uint local_154;
  double local_150;
  uint local_144;
  double local_140;
  uint local_134;
  double local_130;
  uint local_124;
  double local_120;
  uint local_114;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  
  local_108 = "gml_Script_draw@anon@3340@anon@123@gml_Object_oParticleManager_Create_0";
  local_110 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_110;
  local_100 = 0xdd;
  pcVar17 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_100 = 0xdf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a578b0);
  uStack_180 = (char *)(ulonglong)(uint)uStack_180;
  local_188 = (longlong *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(puVar3,&local_188,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar1 != 0) {
    local_100 = 0xe0;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a578b0);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57820);
    if (puVar3 != &local_f8) {
      local_188 = (longlong *)*puVar3;
      uStack_180 = (char *)puVar3[1];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_188);
    }
    local_c8 = &local_f8;
    if (puVar4 != &local_e8) {
      local_188 = (longlong *)*puVar4;
      uStack_180 = (char *)puVar4[1];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_188);
    }
    local_c0 = &local_e8;
    local_188 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_180 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_188);
    pcVar17 = (code *)&local_c8;
    local_b8 = local_d8;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_170,3,pcVar17);
  }
  local_100 = 0xe2;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05568);
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b78);
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57840);
  uStack_180._4_4_ = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffff00;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0a728,0x80000000,&local_120,uVar18,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_180._4_4_ = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0cfc8,0x80000000,&local_130,uVar18,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_180._4_4_ = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_140,uVar18,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_180._4_4_ = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_150,uVar18,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_180._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f3418,0x80000000,&local_160,uVar18,
                in_stack_fffffffffffffe50 & 0xffffff00);
  uVar19 = (undefined4)(uVar18 >> 0x20);
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar8;
  }
  else {
    dVar9 = (double)FUN_140e4b060(pdVar8);
  }
  uVar2 = FUN_140e4a8b0(uVar7);
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar6;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar6);
  }
  if ((local_154 & 0xffffff) == 0) {
    dVar11 = local_160;
  }
  else {
    dVar11 = (double)FUN_140e4b060(&local_160);
  }
  dVar12 = local_160;
  if ((local_154 & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_160);
  }
  dVar13 = local_150;
  if ((local_144 & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_150);
  }
  dVar14 = local_140;
  if ((local_134 & 0xffffff) != 0) {
    dVar14 = (double)FUN_140e4b060(&local_140);
  }
  dVar15 = local_130;
  if ((local_124 & 0xffffff) != 0) {
    dVar15 = (double)FUN_140e4b060(&local_130);
  }
  dVar16 = local_120;
  if ((local_114 & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_120);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar16,(float)dVar15,(float)dVar14,CONCAT44(uVar19,(float)dVar13),
                (float)dVar12,(float)dVar11,(float)dVar10,uVar2,(float)dVar9);
  local_100 = 0xe4;
  uStack_180 = (char *)(ulonglong)(uint)uStack_180;
  local_188 = (longlong *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(puVar3,&local_188,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar1 != 0) {
    local_100 = 0xe5;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a578b0);
    uStack_180 = "gml_Script_pal_swap_reset";
    local_188 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_188;
    local_164 = 5;
    local_170 = 0;
    local_178 = 0x71;
    iVar1 = FUN_140ec9d80();
    if (iVar1 != -1) {
      local_178 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_188;
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
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
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_110;
  return param_3;
}

