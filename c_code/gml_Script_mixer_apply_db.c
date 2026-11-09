// gml_Script_mixer_apply_db @ 0x1403b5780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_mixer_apply_db(ulonglong param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  double *pdVar4;
  ulonglong uVar5;
  double **ppdVar6;
  double **in_stack_fffffffffffffd70;
  ulonglong uVar7;
  double local_288;
  uint local_27c;
  double local_278;
  uint local_26c;
  double local_268;
  undefined4 local_25c;
  double local_258;
  uint local_24c;
  double local_248;
  double dStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  double local_228;
  uint uStack_21c;
  double local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e4;
  double local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  int local_19c;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  double local_f8 [2];
  double local_e8 [2];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double *local_98;
  double *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  local_200 = "gml_Script_light_flash_process";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x1ea;
  _eh_vector_constructor_iterator_(local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_21c = 0xffffff;
  local_228 = 0.0;
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0.0;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_27c = 0xffffff;
  local_288 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_22c = 0;
  local_238 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x1eb;
  uVar5 = 0;
  pdVar4 = (double *)
           gml_Script____struct___140_light_flash_create_lighting_system
                     (param_1,param_2,&local_238,0,0);
  if (pdVar4 != &local_228) {
    local_198 = *pdVar4;
    dStack_190 = pdVar4[1];
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_198);
  }
  local_1f8 = 0x1ec;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0.0;
  local_1f8 = 0x1ed;
LAB_1403b5987:
  local_26c = 0;
LAB_1403b5990:
  do {
    iVar1 = 0;
    if ((uStack_21c == 2) && (local_228 != 0.0)) {
      iVar1 = *(int *)((longlong)local_228 + 0x24);
    }
    local_11c = 0;
    local_128 = (double)iVar1;
    iVar1 = FUN_140e851f0(&local_278,&local_128,DAT_141955260,1);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar1 == -2 || -1 < iVar1) {
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      _eh_vector_destructor_iterator_(local_f8,0x10,6,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_208;
      return param_3;
    }
    local_1f8 = 0x1ee;
    iVar1 = FUN_140e4a740(&local_278);
    pdVar4 = (double *)0x0;
    if (((uStack_21c & 0xffffff) == 2) && (local_228 != 0.0)) {
      if ((iVar1 < 0) || (*(int *)((longlong)local_228 + 0x24) <= iVar1)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                      *(undefined4 *)((longlong)local_228 + 0x24));
      }
      else {
        pdVar4 = (double *)((longlong)iVar1 * 0x10 + *(longlong *)((longlong)local_228 + 8));
      }
      if (pdVar4 != &local_268) goto LAB_1403b5a7e;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      pdVar4 = &local_228;
LAB_1403b5a7e:
      local_248 = *pdVar4;
      dStack_240 = pdVar4[1];
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_248);
    }
    local_1f8 = 0x1ef;
    uVar7 = (ulonglong)in_stack_fffffffffffffd70 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_141a57830,0x80000000,&local_1b8,uVar5,uVar7);
    uVar2 = FUN_140e4a740(&local_1b8);
    FUN_140e87440(&local_268,DAT_1419f5178,uVar2,&local_138,uVar5 & 0xffffffffffffff00,
                  uVar7 & 0xffffffffffffff00);
    dStack_240 = (double)CONCAT44(uStack_12c,uStack_130);
    local_248 = local_138;
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    FUN_140041b80(&local_1f0,&local_248);
    local_1f8 = 0x1f1;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    FUN_140e87170(&local_268,DAT_1419fe0e8,0x80000000,&local_148,param_1,param_2);
    uVar5 = param_1;
    uVar7 = param_2;
    FUN_140e87170(&local_268,DAT_1419fe158,0x80000000,&local_158,param_1,param_2);
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_1419fe698,0x80000000,&local_218,uVar5,uVar7);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f0,DAT_1419f5018,0x80000000,&local_168,uVar5 & 0xffffffffffffff00,uVar7);
    dStack_240 = (double)CONCAT44(uStack_13c,uStack_140);
    local_248 = local_148;
    if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_248);
    local_98 = local_f8;
    dStack_240 = (double)CONCAT44(uStack_14c,uStack_150);
    local_248 = local_158;
    if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_248);
    local_90 = local_e8;
    uStack_1cc = local_20c;
    uStack_1d0 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_218;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_218);
    }
    local_10c = 0;
    local_118 = 0x3fe3333333333333;
    FUN_140042560(&local_1d8,&local_118);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    dStack_240 = (double)CONCAT44(uStack_1cc,uStack_1d0);
    local_248 = local_1d8;
    if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_248);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_88 = local_d8;
    dStack_240 = (double)CONCAT44(uStack_15c,uStack_160);
    local_248 = local_168;
    if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_248);
    local_80 = local_c8;
    local_248 = DAT_1419df7b0;
    dStack_240 = (double)_DAT_1419df7b8;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_248);
    local_78 = local_b8;
    uStack_1bc = local_20c;
    uStack_1c0 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_218;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_218);
    }
    local_fc = 0;
    local_108 = 0x3fd3333333333333;
    FUN_140042560(&local_1c8,&local_108);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    dStack_240 = (double)CONCAT44(uStack_1bc,uStack_1c0);
    local_248 = local_1c8;
    if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_248);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_70 = local_a8;
    ppdVar6 = &local_98;
    gml_Script_draw_sprite_general_lit(param_1,param_2,&local_238,6,ppdVar6);
    local_1f8 = 499;
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar5 = (ulonglong)ppdVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_1419f51a8,0x80000000,&local_288,uVar5,uVar7);
    uVar3 = local_27c & 0xffffff;
    if (uVar3 == 0) {
LAB_1403b5f63:
      local_288 = local_288 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_288 = (double)FUN_140e4b060(&local_288);
        local_27c = 0;
        goto LAB_1403b5f63;
      }
      if (uVar3 == 7) {
        local_288 = (double)CONCAT44(local_288._4_4_,local_288._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_288 = (double)((longlong)local_288 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_27c = 0;
          goto LAB_1403b5f63;
        }
        FUN_140042910(&DAT_14172c3d8,&local_288,&local_288);
      }
    }
    FUN_140e87930(&local_268,DAT_1419f51a8,0x80000000,&local_288);
    local_1f8 = 500;
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_1419f51a8,0x80000000,&local_178,uVar5,uVar7);
    in_stack_fffffffffffffd70 = (double **)(uVar7 & 0xffffffffffffff00);
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f0,DAT_1419f3ef8,0x80000000,&local_188,uVar5,in_stack_fffffffffffffd70);
    uVar3 = FUN_140e851f0(&local_178,&local_188,DAT_141955260,1);
    if (0x7fffffff < uVar3) {
LAB_1403b62bb:
      local_1f8 = 0x1fc;
      uVar3 = local_26c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 == 1) break;
        if (uVar3 == 7) {
          local_278 = (double)CONCAT44(local_278._4_4_,local_278._0_4_ + 1);
          goto LAB_1403b5990;
        }
        if (uVar3 == 10) {
          local_278 = (double)((longlong)local_278 + 1);
          goto LAB_1403b5990;
        }
        if (uVar3 != 0xd) {
          FUN_140042910(&DAT_14172c3d8,&local_278,&local_278);
          goto LAB_1403b5990;
        }
        local_26c = 0;
      }
      local_278 = local_278 + 1.0;
      goto LAB_1403b5990;
    }
    local_1f8 = 0x1f5;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_27c = 0;
    local_288 = 0.0;
    FUN_140e87930(&local_268,DAT_1419f51a8,0x80000000,&local_288);
    local_1f8 = 0x1f6;
    uVar7 = (ulonglong)in_stack_fffffffffffffd70 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_141a57830,0x80000000,&local_258,uVar5,uVar7);
    uVar3 = local_24c & 0xffffff;
    if (uVar3 == 0) {
LAB_1403b60ec:
      local_258 = local_258 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_258 = (double)FUN_140e4b060(&local_258);
        local_24c = 0;
        goto LAB_1403b60ec;
      }
      if (uVar3 == 7) {
        local_258 = (double)CONCAT44(local_258._4_4_,local_258._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_258 = (double)((longlong)local_258 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_24c = 0;
          goto LAB_1403b60ec;
        }
        FUN_140042910(&DAT_14172c3d8,&local_258,&local_258);
      }
    }
    FUN_140e87930(&local_268,DAT_141a57830,0x80000000,&local_258);
    local_1f8 = 0x1f7;
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_141a57830,0x80000000,&local_1b8,uVar5,uVar7);
    in_stack_fffffffffffffd70 = (double **)(uVar7 & 0xffffffffffffff00);
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(&local_268,DAT_1419f5178,0x80000000,&local_1a8,uVar5,in_stack_fffffffffffffd70);
    iVar1 = 0;
    if ((local_19c == 2) && (local_1a8 != 0)) {
      iVar1 = *(int *)(local_1a8 + 0x24);
    }
    dStack_190 = (double)((ulonglong)dStack_190 & 0xffffffff);
    local_198 = (double)iVar1;
    uVar3 = FUN_140e851f0(&local_1b8,&local_198,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (0x7fffffff < uVar3) goto LAB_1403b62bb;
    local_1f8 = 0x1f8;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uVar2 = (undefined4)(uVar5 >> 0x20);
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_98 = &local_228;
    local_90 = &local_278;
    local_248 = _DAT_1419e46a0;
    dStack_240 = dRam00000001419e46a8;
    if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_248);
    local_88 = local_d8;
    in_stack_fffffffffffffd70 = &local_98;
    uVar5 = CONCAT44(uVar2,DAT_1419fd808);
    FUN_140e634e0(param_1,param_2,&local_238,3,uVar5,in_stack_fffffffffffffd70);
    local_1f8 = 0x1f9;
  } while( true );
  local_278 = (double)FUN_140e4b060(&local_278);
  local_278 = local_278 + 1.0;
  goto LAB_1403b5987;
}

