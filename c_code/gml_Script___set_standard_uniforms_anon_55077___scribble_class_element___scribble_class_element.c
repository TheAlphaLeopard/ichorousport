// gml_Script___set_standard_uniforms_anon_55077___scribble_class_element___scribble_class_element @ 0x140133200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * gml_Script___set_standard_uniforms_anon_55077___scribble_class_element___scribble_class_element
                 (longlong *param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 *param_5
                 )

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  double *pdVar9;
  double *pdVar10;
  undefined8 *puVar11;
  uint *puVar12;
  longlong **pplVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  double dVar17;
  longlong ***ppplVar18;
  ulonglong uVar19;
  uint **ppuVar20;
  undefined4 uVar22;
  undefined8 uVar21;
  ulonglong in_stack_fffffffffffffe70;
  double **ppdVar23;
  ulonglong uVar24;
  undefined8 local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  double local_158;
  byte local_14c;
  longlong *local_148;
  undefined4 local_13c;
  uint local_138 [3];
  byte local_12c;
  double *local_128;
  longlong **local_120;
  uint *local_118;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  double local_d8;
  undefined4 local_cc;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8 [3];
  uint uStack_ac;
  undefined8 local_a8;
  uint local_a0;
  undefined4 local_9c;
  uint local_98;
  ulonglong local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_108 = "gml_Script___get_model@anon@49775@__scribble_class_element@__scribble_class_element";
  local_110 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_110;
  local_100 = 0x667;
  uVar22 = 1;
  _eh_vector_constructor_iterator_(&local_158,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar16 = 0xffffff;
  bVar15 = 0xff;
  local_98 = 0xffffff;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  uStack_ac = 0xffffff;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_16c = 0;
  local_178 = 0;
  local_dc = 0;
  local_e8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcdd0) &&
     (_Init_thread_header(&DAT_141ddcdd0), DAT_141ddcdd0 == -1)) {
    DAT_141ddce38 = (longlong *)FUN_140e63aa0(DAT_141a04f78);
    _Init_thread_footer(&DAT_141ddcdd0);
  }
  if (DAT_141ddc07d == '\0') {
    FUN_140e64380(DAT_141ddce38,
                  "gml_Script___get_model@anon@49775@__scribble_class_element@__scribble_class_element"
                 );
    FUN_140e64380(param_1,
                  "gml_Script___get_model@anon@49775@__scribble_class_element@__scribble_class_element"
                 );
  }
  local_100 = 0x669;
  if (DAT_141ddc07d == '\0') {
    DAT_141ddc07d = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddce38 + 0x10))(DAT_141ddce38,DAT_141a04dc8);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_188 = (double)CONCAT44(DAT_1419df7b0._4_4_,(uint)DAT_1419df7b0);
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_188);
    local_120 = &local_148;
    ppplVar18 = &local_120;
    uVar7 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_178,1,ppplVar18);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
    uVar19 = (ulonglong)ppplVar18 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a05138,0x80000000,&local_58,uVar19,in_stack_fffffffffffffe70);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
    FUN_140e87440(&local_58,DAT_141a05058,0x80000000,&local_78,uVar19 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe70);
    FUN_140e609c0(DAT_141ddce38);
    if (&local_78 != puVar6) {
      local_188 = (double)local_78;
      uStack_180 = uStack_70;
      uStack_17c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_188);
    }
    FUN_140e60910(1);
    puVar8 = (ulonglong *)(**(code **)(*DAT_141ddce38 + 0x10))(DAT_141ddce38,DAT_141a057d8);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_188 = (double)CONCAT44(DAT_1419df7b0._4_4_,(uint)DAT_1419df7b0);
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_188);
    local_118 = local_138;
    ppuVar20 = &local_118;
    uVar7 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_e8,1,ppuVar20);
    uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a058e8,0x80000000,&local_88,uVar19,
                  in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    uVar22 = (undefined4)(uVar19 >> 0x20);
    FUN_140e609c0(DAT_141ddce38);
    if (&local_88 != puVar8) {
      local_188 = (double)local_88;
      uStack_180 = uStack_80;
      uStack_17c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_188);
    }
    FUN_140e60910(1);
  }
  local_100 = 0x66b;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05c98);
  cVar4 = FUN_140e491e0(uVar7);
  if (cVar4 == '\0') {
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05358);
    uStack_17c = DAT_141dcb544;
    uStack_180 = DAT_141dcb540;
    if ((1 << ((byte)DAT_141dcb544 & 0x1f) & 0x46U) == 0) {
      local_188 = (double)DAT_141dcb538;
    }
    else {
      FUN_1400419b0(&local_188,&DAT_141dcb538);
    }
    iVar5 = FUN_140e851f0(uVar7,&local_188,DAT_141955260,0);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar5 == 0) goto LAB_140136744;
    local_100 = 0x671;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05918);
    cVar4 = FUN_140e491e0(uVar7);
    if (cVar4 != '\0') {
      local_100 = 0x673;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05918);
      uStack_17c = 0xd;
      local_188 = 0.0;
      if (&local_188 != puVar6) {
        local_f8 = 0;
        uStack_f0 = uStack_180;
        uStack_ec = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_f8);
      }
      local_100 = 0x674;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04dd8);
      uStack_17c = 0xd;
      local_188 = 1.0;
      if (&local_188 != puVar6) {
        local_f8 = 0x3ff0000000000000;
        uStack_f0 = uStack_180;
        uStack_ec = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_f8);
      }
      local_100 = 0x675;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a053a8);
      uStack_17c = 0xd;
      local_188 = 1.0;
      if (&local_188 != puVar6) {
        local_f8 = 0x3ff0000000000000;
        uStack_f0 = uStack_180;
        uStack_ec = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_f8);
      }
      local_100 = 0x678;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar9 = (double *)(**(code **)(*DAT_141ddce38 + 8))(DAT_141ddce38,DAT_141a057d8);
      if (pdVar9 != &local_158) {
        local_188 = *pdVar9;
        uStack_180 = *(uint *)(pdVar9 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar9 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      local_188 = (double)CONCAT44(uRam0000000141dc61a4,_DAT_141dc61a0);
      uStack_180 = uRam0000000141dc61a8;
      uStack_17c = uRam0000000141dc61ac;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
      local_120 = &local_148;
      local_188 = (double)CONCAT44(uRam0000000141dc61a4,_DAT_141dc61a0);
      uStack_180 = uRam0000000141dc61a8;
      uStack_17c = uRam0000000141dc61ac;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_188);
      local_118 = local_138;
      uVar7 = CONCAT44(uVar22,DAT_141a05a38);
      FUN_140e634e0(param_1,param_2,&local_178,3,uVar7,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_100 = 0x679;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05358);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x67a;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05298);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x67b;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a056d8);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x67c;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b48);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x67d;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ab8);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x67e;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05348);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x67f;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04e48);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x680;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05c28);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x681;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a057a8);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x682;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a056f8);
      if (pdVar10 != &local_158) {
        local_188 = *pdVar10;
        uStack_180 = *(uint *)(pdVar10 + 1);
        uStack_17c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x683;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a053e8);
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05758);
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a054e8);
      uStack_17c = *(undefined4 *)((longlong)puVar11 + 0xc);
      uStack_180 = *(uint *)(puVar11 + 1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
        local_188 = (double)*puVar11;
      }
      else {
        FUN_1400419b0(&local_188,puVar11);
      }
      FUN_1400460e0(&local_188,uVar7);
      uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      uStack_f0 = *(uint *)(puVar6 + 1);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
        local_f8 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_f8,puVar6);
      }
      FUN_1400462a0(&local_f8,&local_188);
      local_168 = (uint)local_f8;
      uStack_164 = local_f8._4_4_;
      uStack_160 = uStack_f0;
      uStack_15c = uStack_ec;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_168);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x684;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04f18);
      puVar11 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05618);
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05408);
      uStack_ec = *(undefined4 *)((longlong)puVar11 + 0xc);
      uStack_f0 = *(uint *)(puVar11 + 1);
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
        local_f8 = *puVar11;
      }
      else {
        FUN_1400419b0(&local_f8,puVar11);
      }
      FUN_1400460e0(&local_f8,uVar7);
      uStack_17c = *(uint *)((longlong)puVar6 + 0xc);
      uStack_180 = *(uint *)(puVar6 + 1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
        local_188 = (double)*puVar6;
      }
      else {
        FUN_1400419b0(&local_188,puVar6);
      }
      FUN_1400462a0(&local_188,&local_f8);
      local_168 = (uint)local_188;
      uStack_164 = local_188._4_4_;
      uStack_160 = uStack_180;
      uStack_15c = uStack_17c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_168);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x685;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05788);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x686;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05578);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x687;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06018);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x688;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b18);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar10, dVar17 != 0.0)) {
        if (*(int *)((longlong)dVar17 + 0x24) < 1) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = *(double **)((longlong)dVar17 + 8);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x2c);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x689;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b18);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar10, dVar17 != 0.0)) {
        if (*(int *)((longlong)dVar17 + 0x24) < 2) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x10);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x2c);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x68a;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b18);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar10, dVar17 != 0.0)) {
        if (*(int *)((longlong)dVar17 + 0x24) < 3) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x20);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x2c);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x68b;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b18);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar10, dVar17 != 0.0)) {
        if (*(int *)((longlong)dVar17 + 0x24) < 4) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x30);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x2c);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x68c;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b18);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar10, dVar17 != 0.0)) {
        if (*(int *)((longlong)dVar17 + 0x24) < 5) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",4);
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x40);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x2c);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x68d;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b18);
      if (((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 2) &&
         (dVar17 = *pdVar10, dVar17 != 0.0)) {
        if (*(int *)((longlong)dVar17 + 0x24) < 6) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",5);
          pdVar10 = (double *)0x0;
        }
        else {
          pdVar10 = (double *)(*(longlong *)((longlong)dVar17 + 8) + 0x50);
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x68e;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05b38);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x68f;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04d58);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x690;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a060d8);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x691;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a056c8);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x692;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ee8);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x693;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a051a8);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x694;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a051e8);
      if (pdVar10 != &local_158) {
        local_168 = *(uint *)pdVar10;
        uStack_164 = *(uint *)((longlong)pdVar10 + 4);
        uStack_160 = *(uint *)(pdVar10 + 1);
        uStack_15c = *(uint *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x695;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      puVar12 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05948);
      if (puVar12 == (uint *)&local_c8) {
        uVar16 = local_98;
      }
      else {
        local_168 = *puVar12;
        uStack_164 = puVar12[1];
        uStack_160 = puVar12[2];
        uStack_15c = puVar12[3];
        FUN_140041b80(&local_c8,&local_168);
        uVar16 = local_bc;
      }
      if ((uVar16 & 0xffffff) == 3) {
        if (local_c8 == 0) goto LAB_140135e1e;
LAB_140135deb:
        uStack_17c = uVar16;
        uStack_180 = local_c0;
        if ((1 << ((byte)uVar16 & 0x1f) & 0x46U) == 0) {
          local_188 = (double)local_c8;
        }
        else {
          FUN_1400419b0(&local_188,&local_c8);
        }
        puVar12 = (uint *)&local_188;
        bVar3 = false;
        bVar2 = true;
      }
      else {
        if ((uVar16 & 0xffffff) != 5) goto LAB_140135deb;
LAB_140135e1e:
        FUN_140e85f80(param_1,DAT_141a053b8,0x80000000,&local_a8);
        uStack_ec = local_9c;
        uStack_f0 = local_a0;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
          local_f8 = local_a8;
        }
        else {
          FUN_1400419b0(&local_f8,&local_a8);
        }
        puVar12 = (uint *)&local_f8;
        bVar3 = true;
        bVar2 = false;
      }
      local_168 = *puVar12;
      uStack_164 = puVar12[1];
      uStack_160 = puVar12[2];
      uStack_15c = puVar12[3];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_168);
      if ((bVar2) && ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_188);
      }
      if ((bVar3) && ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_f8);
      }
      local_128 = &local_158;
      uVar7 = CONCAT44(uVar22,DAT_141a05338);
      pplVar13 = (longlong **)FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (pplVar13 != &local_148) {
        local_168 = *(uint *)pplVar13;
        uStack_164 = *(uint *)((longlong)pplVar13 + 4);
        uStack_160 = *(uint *)(pplVar13 + 1);
        uStack_15c = *(uint *)((longlong)pplVar13 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_168);
      }
      local_120 = &local_148;
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      uVar21 = CONCAT44(uVar22,DAT_1419fcb18);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar21,&local_120);
      uVar22 = (undefined4)((ulonglong)uVar21 >> 0x20);
      FUN_140ececc0((longlong)dVar17,0xd,uVar7);
      uStack_17c = 7;
      local_188 = (double)CONCAT44(local_188._4_4_,0x3a);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x696;
      uStack_17c = 7;
      local_188 = (double)((ulonglong)local_188 & 0xffffffff00000000);
      if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
        dVar17 = *pdVar9;
      }
      else {
        dVar17 = (double)FUN_140e4b060(pdVar9);
      }
      FUN_140ececc0((longlong)dVar17,1,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_100 = 0x697;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      if (pdVar9 != &local_158) {
        local_168 = *(uint *)pdVar9;
        uStack_164 = *(undefined4 *)((longlong)pdVar9 + 4);
        uStack_160 = *(uint *)(pdVar9 + 1);
        uStack_15c = *(undefined4 *)((longlong)pdVar9 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      local_168 = _DAT_141dc61a0;
      uStack_164 = uRam0000000141dc61a4;
      uStack_160 = uRam0000000141dc61a8;
      uStack_15c = uRam0000000141dc61ac;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
      local_120 = &local_148;
      local_168 = _DAT_141dc61a0;
      uStack_164 = uRam0000000141dc61a4;
      uStack_160 = uRam0000000141dc61a8;
      uStack_15c = uRam0000000141dc61ac;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_168);
      local_118 = local_138;
      uVar7 = CONCAT44(uVar22,DAT_141a05a38);
      FUN_140e634e0(param_1,param_2,&local_178,3,uVar7,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_100 = 0x699;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      puVar12 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a054b8);
      if (pdVar9 != &local_158) {
        local_168 = *(uint *)pdVar9;
        uStack_164 = *(undefined4 *)((longlong)pdVar9 + 4);
        uStack_160 = *(uint *)(pdVar9 + 1);
        uStack_15c = *(undefined4 *)((longlong)pdVar9 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
      }
      local_128 = &local_158;
      local_168 = _DAT_1419e1db0;
      uStack_164 = uRam00000001419e1db4;
      uStack_160 = uRam00000001419e1db8;
      uStack_15c = uRam00000001419e1dbc;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
      local_120 = &local_148;
      FUN_140e609c0(param_1);
      uVar7 = CONCAT44(uVar22,DAT_141a04da8);
      puVar14 = (uint *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar7,&local_128);
      uVar22 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (puVar14 != puVar12) {
        local_168 = *puVar14;
        uStack_164 = puVar14[1];
        uStack_160 = puVar14[2];
        uStack_15c = puVar14[3];
        if ((1 << ((byte)puVar12[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar12);
        }
        FUN_140041b80(puVar12,&local_168);
      }
      FUN_140e60910(1);
    }
    bVar15 = (byte)uVar16;
    local_100 = 0x69c;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    pdVar9 = (double *)(**(code **)(*DAT_141ddce38 + 8))(DAT_141ddce38,DAT_141a04dc8);
    pplVar13 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a054b8);
    if (pdVar9 != &local_158) {
      local_168 = *(uint *)pdVar9;
      uStack_164 = *(uint *)((longlong)pdVar9 + 4);
      uStack_160 = *(uint *)(pdVar9 + 1);
      uStack_15c = *(uint *)((longlong)pdVar9 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_168);
    }
    local_128 = &local_158;
    if (pplVar13 != &local_148) {
      local_168 = *(uint *)pplVar13;
      uStack_164 = *(uint *)((longlong)pplVar13 + 4);
      uStack_160 = *(uint *)(pplVar13 + 1);
      uStack_15c = *(uint *)((longlong)pplVar13 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
    }
    local_120 = &local_148;
    uVar19 = CONCAT44(uVar22,DAT_141a01138);
    pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar19,&local_128);
    if (pdVar9 != &local_d8) {
      local_168 = *(uint *)pdVar9;
      uStack_164 = *(uint *)((longlong)pdVar9 + 4);
      uStack_160 = *(uint *)(pdVar9 + 1);
      uStack_15c = *(uint *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_168);
    }
    local_100 = 0x69d;
    iVar5 = FUN_140e851f0(&local_d8,&DAT_1419df7b0,DAT_141955260,0);
    uVar22 = (undefined4)(uVar19 >> 0x20);
    if (iVar5 == 0) {
LAB_140136554:
      uVar22 = (undefined4)(uVar19 >> 0x20);
      local_100 = 0x6a1;
      if (param_4 < 1) {
        param_5 = &DAT_1419df7b0;
      }
      else {
        param_5 = (undefined8 *)*param_5;
      }
      cVar4 = FUN_140e491e0(param_5);
      if (cVar4 != '\0') {
        local_100 = 0x6a4;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        puVar14 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a054b8);
        puVar12 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05558);
        local_168 = DAT_141a051c8 & 0xffffff;
        uStack_164 = (int)(DAT_141a051c8 | 0x5000000) >> 0x18 & 0xff;
        if (uStack_164 == 0xf) {
          uStack_164 = 0x4000004;
        }
        else {
          uStack_164 = uStack_164 | 0x1000000;
        }
        uStack_17c = 0xf;
        local_188 = (double)(CONCAT44(uStack_164,DAT_141a051c8) & 0xffffffff00ffffff);
        uStack_160 = uStack_180;
        uStack_15c = 0xf;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_168);
        local_128 = &local_158;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_13c = 6;
        local_148 = param_1;
        uVar7 = FUN_140e5c910();
        FUN_140e42c10(uVar7,param_1);
        local_120 = &local_148;
        if (puVar14 != local_138) {
          local_168 = *puVar14;
          uStack_164 = puVar14[1];
          uStack_160 = puVar14[2];
          uStack_15c = puVar14[3];
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_168);
        }
        local_118 = local_138;
        FUN_140e609c0(param_1);
        puVar14 = (uint *)FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar22,DAT_1419fd6d8),
                                        &local_128);
        if (puVar14 == puVar12) goto LAB_1401367a1;
        bVar1 = (byte)puVar12[3];
        local_168 = *puVar14;
        uStack_164 = puVar14[1];
        uStack_160 = puVar14[2];
        uStack_15c = puVar14[3];
        goto LAB_14013678a;
      }
      local_100 = 0x6a8;
      puVar12 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05558);
      FUN_140e609c0(param_1);
      goto LAB_14013676c;
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_128 = &local_d8;
    ppdVar23 = &local_128;
    uVar19 = CONCAT44(uVar22,DAT_141a04538);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar19,ppdVar23);
    cVar4 = FUN_140e491e0(uVar7);
    if (cVar4 == '\0') goto LAB_140136554;
    uVar24 = (ulonglong)ppdVar23 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(&local_d8,DAT_141a05da8,0x80000000,local_b8,uVar19,uVar24);
    uVar24 = uVar24 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(local_b8,DAT_141a05c98,0x80000000,&local_68,uVar19,uVar24);
    cVar4 = FUN_140e491e0(&local_68);
    if (cVar4 != '\0') goto LAB_140136554;
    local_100 = 0x69f;
    puVar12 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05558);
    FUN_140e87440(&local_d8,DAT_141a05da8,0x80000000,local_b8,uVar19 & 0xffffffffffffff00,
                  uVar24 & 0xffffffffffffff00);
    FUN_140e609c0(param_1);
    if (local_b8 == puVar12) goto LAB_1401367a1;
    local_168 = local_b8[0];
    uStack_164 = local_b8[1];
    uStack_160 = local_b8[2];
    uStack_15c = uStack_ac;
    bVar1 = (byte)puVar12[3];
  }
  else {
LAB_140136744:
    local_100 = 0x66d;
    puVar12 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05558);
    FUN_140e609c0(param_1);
LAB_14013676c:
    if (puVar12 == (uint *)&DAT_1419df7b0) goto LAB_1401367a1;
    bVar1 = (byte)puVar12[3];
    local_168 = (uint)DAT_1419df7b0;
    uStack_164 = DAT_1419df7b0._4_4_;
    uStack_160 = DAT_1419df7b8;
    uStack_15c = DAT_1419df7bc;
  }
LAB_14013678a:
  if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar12);
  }
  FUN_140041b80(puVar12,&local_168);
LAB_1401367a1:
  FUN_140e60910(1);
  local_100 = 0x6ac;
  puVar12 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05558);
  if (puVar12 != param_3) {
    local_168 = *puVar12;
    uStack_164 = puVar12[1];
    uStack_160 = puVar12[2];
    uStack_15c = puVar12[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << (bVar15 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_110;
  return param_3;
}

