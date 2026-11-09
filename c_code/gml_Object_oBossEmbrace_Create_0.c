// gml_Object_oBossEmbrace_Create_0 @ 0x140725d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBossEmbrace_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong *plVar11;
  undefined4 uVar15;
  ulonglong uVar12;
  double **ppdVar13;
  undefined8 uVar14;
  ulonglong in_stack_fffffffffffffe00;
  ulonglong uVar16;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8;
  undefined4 local_19c;
  double local_198 [2];
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double *local_160;
  double *local_158;
  double *local_150;
  double *local_148;
  undefined1 *local_140;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  double local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_170 = "gml_Object_oBossDmgBox_Step_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  _eh_vector_constructor_iterator_(local_1c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_168 = 4;
  local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_1e8);
  local_160 = local_1c8;
  local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1e0 = DAT_1419df7b8;
  uStack_1dc = DAT_1419df7bc;
  if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_1e8);
  local_158 = local_1b8;
  ppdVar13 = &local_160;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_1f8,2,ppdVar13);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_168 = 6;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_168 = 10;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87440(uVar3,DAT_1419f5ef8,0x80000000,&local_78,(ulonglong)ppdVar13 & 0xffffffffffffff00,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  local_1e8 = (longlong *)local_78;
  uStack_1e0 = uStack_70;
  uStack_1dc = uStack_6c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_1e8);
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_a8);
  local_168 = 0xc;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
  local_1e8 = (longlong *)local_f8;
  uStack_1e0 = uStack_f0;
  uStack_1dc = uStack_ec;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_1e8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
  local_168 = 0xd;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  plVar11 = param_1;
  FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
  uVar15 = (undefined4)((ulonglong)plVar11 >> 0x20);
  local_1e8 = (longlong *)local_108;
  uStack_1e0 = uStack_100;
  uStack_1dc = uStack_fc;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1e8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
  local_168 = 0xf;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uVar16 = 0;
  uVar12 = CONCAT44(uVar15,DAT_1419ef5d8);
  pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1f8,0,uVar12,0);
  if (pdVar4 != &local_128) {
    local_1e8 = (longlong *)*pdVar4;
    uStack_1e0 = *(undefined4 *)(pdVar4 + 1);
    uStack_1dc = *(uint *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1e8);
  }
  local_168 = 0x10;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_1dc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_88,uVar12,uVar16);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_98,uVar12,uVar16 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = (longlong *)local_88;
  uStack_1e0 = uStack_80;
  uStack_1dc = uStack_7c;
  if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_1e8);
  local_160 = local_1c8;
  local_1e8 = (longlong *)local_98;
  uStack_1e0 = uStack_90;
  uStack_1dc = uStack_8c;
  if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_1e8);
  local_158 = local_1b8;
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)0x1000000000000ee;
  local_1d8 = 0xee;
  uStack_1d4 = 0x1000000;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = 0xf;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_1d8);
  local_150 = &local_1a8;
  local_1d8 = _DAT_1419df7a0;
  uStack_1d4 = uRam00000001419df7a4;
  uStack_1d0 = uRam00000001419df7a8;
  uStack_1cc = uRam00000001419df7ac;
  local_148 = &local_128;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1d8);
  local_140 = local_188;
  ppdVar13 = (double **)CONCAT44(uVar15,DAT_141a56b80);
  FUN_140e634e0(param_1,param_2,&local_1f8,5,ppdVar13,&local_160);
  local_168 = 0x11;
  while( true ) {
    uVar15 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar14 = CONCAT44(uVar15,DAT_1419f58d8);
    local_160 = &local_128;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar14,&local_160);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') break;
    local_168 = 0x13;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    local_1d8 = _DAT_141dc6960;
    uStack_1d4 = uRam0000000141dc6964;
    uStack_1d0 = uRam0000000141dc6968;
    uStack_1cc = uRam0000000141dc696c;
    local_158 = &local_128;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1d8);
    local_150 = &local_1a8;
    uVar3 = CONCAT44(uVar15,DAT_1419f5a78);
    pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar3,&local_158);
    uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (pdVar4 != &local_138) {
      local_1d8 = *(undefined4 *)pdVar4;
      uStack_1d4 = *(undefined4 *)((longlong)pdVar4 + 4);
      uStack_1d0 = *(undefined4 *)(pdVar4 + 1);
      uStack_1cc = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1d8);
    }
    local_168 = 0x14;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_1d8 = _DAT_141dc6960;
    uStack_1d4 = uRam0000000141dc6964;
    uStack_1d0 = uRam0000000141dc6968;
    uStack_1cc = uRam0000000141dc696c;
    local_160 = &local_128;
    if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_1d8);
    local_158 = local_1b8;
    uVar3 = CONCAT44(uVar15,DAT_1419f5938);
    FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar3,&local_160);
    uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_168 = 0x15;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
    if (pdVar4 != local_1c8) {
      local_1d8 = *(undefined4 *)pdVar4;
      uStack_1d4 = *(undefined4 *)((longlong)pdVar4 + 4);
      uStack_1d0 = *(undefined4 *)(pdVar4 + 1);
      uStack_1cc = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_1d8);
    }
    local_160 = local_1c8;
    local_1d8 = _DAT_1419e7da0;
    uStack_1d4 = uRam00000001419e7da4;
    uStack_1d0 = uRam00000001419e7da8;
    uStack_1cc = uRam00000001419e7dac;
    if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_1d8);
    local_158 = local_1b8;
    ppdVar13 = (double **)CONCAT44(uVar15,DAT_141a01af8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_1f8,2,ppdVar13,&local_160);
    cVar1 = FUN_140e491e0(uVar3);
    uVar15 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
    if (cVar1 == '\0') {
      local_168 = 0x15;
    }
    else {
      local_168 = 0x16;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if (pdVar4 != local_1c8) {
        local_1d8 = *(undefined4 *)pdVar4;
        uStack_1d4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_1d0 = *(undefined4 *)(pdVar4 + 1);
        uStack_1cc = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_1d8);
      }
      local_160 = local_1c8;
      local_158 = &local_138;
      ppdVar13 = (double **)CONCAT44(uVar15,DAT_141a573f0);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_1f8,2,ppdVar13,&local_160);
      uStack_1dc = 0;
      local_1e8 = (longlong *)&DAT_bff0000000000000;
      iVar2 = FUN_140e851f0(uVar3,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      uVar15 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
      if (iVar2 == 0) {
        local_168 = 0x17;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        if (pdVar4 != local_1c8) {
          local_1d8 = *(undefined4 *)pdVar4;
          uStack_1d4 = *(undefined4 *)((longlong)pdVar4 + 4);
          uStack_1d0 = *(undefined4 *)(pdVar4 + 1);
          uStack_1cc = *(undefined4 *)((longlong)pdVar4 + 0xc);
          if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_1d8);
        }
        local_160 = local_1c8;
        local_158 = &local_138;
        FUN_140e634e0(param_1,param_2,&local_1f8,2,CONCAT44(uVar15,DAT_141a57350),&local_160);
        local_168 = 0x19;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
        local_160 = &local_138;
        if (pdVar5 != local_1b8) {
          local_1d8 = *(undefined4 *)pdVar5;
          uStack_1d4 = *(undefined4 *)((longlong)pdVar5 + 4);
          uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
          uStack_1cc = *(undefined4 *)((longlong)pdVar5 + 0xc);
          if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_1d8);
        }
        local_158 = local_1b8;
        if (pdVar4 != &local_1a8) {
          local_1d8 = *(undefined4 *)pdVar4;
          uStack_1d4 = *(undefined4 *)((longlong)pdVar4 + 4);
          uStack_1d0 = *(undefined4 *)(pdVar4 + 1);
          uStack_1cc = *(undefined4 *)((longlong)pdVar4 + 0xc);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1d8);
        }
        local_150 = &local_1a8;
        gml_Script_draw_line_sprite(param_1,param_2,&local_1f8,3,&local_160);
        local_168 = 0x1a;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        local_1d8 = (undefined4)DAT_1419df7b0;
        uStack_1d4 = DAT_1419df7b0._4_4_;
        uStack_1d0 = DAT_1419df7b8;
        uStack_1cc = DAT_1419df7bc;
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_1d8);
        local_160 = local_1c8;
        local_1d8 = (undefined4)DAT_1419df7b0;
        uStack_1d4 = DAT_1419df7b0._4_4_;
        uStack_1d0 = DAT_1419df7b8;
        uStack_1cc = DAT_1419df7bc;
        if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_1d8);
        local_158 = local_1b8;
        gml_Script_IK_documentation(param_1,param_2,&local_1f8,2,&local_160);
        local_168 = 0x1b;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
        (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
        FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_f8,param_1,param_2);
        FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
        FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
        FUN_140e87170(&local_138,DAT_1419fe158,0x80000000,&local_e8,param_1,param_2);
        local_1d8 = _DAT_1419e7db0;
        uStack_1d4 = uRam00000001419e7db4;
        uStack_1d0 = uRam00000001419e7db8;
        uStack_1cc = uRam00000001419e7dbc;
        if ((1 << ((byte)local_1c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_1d8);
        local_160 = local_1c8;
        local_1d8 = _DAT_1419e7dc0;
        uStack_1d4 = uRam00000001419e7dc4;
        uStack_1d0 = uRam00000001419e7dc8;
        uStack_1cc = uRam00000001419e7dcc;
        if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_1d8);
        local_158 = local_1b8;
        dVar7 = local_e8;
        if ((local_dc & 0xffffff) != 0) {
          dVar7 = (double)FUN_140e4b060(&local_e8);
        }
        dVar8 = local_d8;
        if ((local_cc & 0xffffff) != 0) {
          dVar8 = (double)FUN_140e4b060(&local_d8);
        }
        dVar9 = local_108;
        if ((uStack_fc & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_108);
        }
        dVar10 = local_f8;
        if ((uStack_ec & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_f8);
        }
        fVar6 = (float)FUN_140e793d0((float)dVar10,(float)dVar9,(float)dVar8,(float)dVar7);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_19c = 0;
        local_1a8 = (double)fVar6;
        local_150 = &local_1a8;
        local_1d8 = (undefined4)DAT_1419df7b0;
        uStack_1d4 = DAT_1419df7b0._4_4_;
        uStack_1d0 = DAT_1419df7b8;
        uStack_1cc = DAT_1419df7bc;
        if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1d8);
        local_148 = local_198;
        ppdVar13 = &local_160;
        FUN_14044e5b0(param_1,param_2,&local_1f8,4,ppdVar13);
        local_168 = 0x1d;
        FUN_140edd0e0(param_1,param_2,0,0);
      }
      else {
        local_168 = 0x16;
        (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
      }
    }
  }
  local_168 = 0x21;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_160 = &local_128;
  FUN_140e634e0(param_1,param_2,&local_1f8,1,CONCAT44(uVar15,DAT_1419f6038),&local_160);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_1c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}

