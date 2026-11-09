// gml_Object_oBossKillText_Draw_0 @ 0x1407a37c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossKillText_Draw_0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double **ppdVar12;
  double **in_stack_fffffffffffffca0;
  longlong local_358;
  longlong lStack_350;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  longlong local_338;
  undefined4 local_32c;
  double local_328;
  uint local_31c;
  double local_318;
  uint local_30c;
  longlong local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  longlong local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  undefined4 local_2bc;
  longlong local_2b8;
  undefined4 local_2ac;
  longlong local_2a8;
  undefined4 local_29c;
  longlong local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  longlong local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248 [2];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  local_2f0 = "gml_Script_anon@2793@anon@198@gml_Object_oBossKillText_Create_0";
  local_2f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2f8;
  local_2e8 = 0x73;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_248,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b00);
  local_27c = 0xffffff;
  local_288 = 0;
  local_31c = 0xffffff;
  local_328 = 0.0;
  local_32c = 0xffffff;
  local_338 = 0;
  uStack_2cc = 0xffffff;
  local_2d8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  uStack_24c = 0xffffff;
  local_258 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  uStack_25c = 0xffffff;
  local_268 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_2fc = 0xffffff;
  local_308 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_30c = 0xffffff;
  local_318 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_33c = 0;
  local_348 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_2e8 = 0x75;
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar8 = *puVar5;
  }
  else {
    uVar8 = FUN_140e4b060(puVar5);
  }
  uVar8 = FUN_140e78ec0(uVar8,0,0x3ff0000000000000);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_27c = 0;
  local_2e8 = 0x77;
  local_288 = uVar8;
  if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_328);
  }
  local_31c = 0;
  local_328 = 0.0;
  bVar1 = true;
  do {
    do {
      iVar3 = 0;
      if (!bVar1) {
        local_2e8 = 0x77;
        uVar2 = local_31c & 0xffffff;
        if (uVar2 != 0) {
          if (uVar2 != 1) {
            if (uVar2 == 7) {
              local_328 = (double)CONCAT44(local_328._4_4_,local_328._0_4_ + 1);
            }
            else if (uVar2 == 10) {
              local_328 = (double)((longlong)local_328 + 1);
            }
            else {
              if (uVar2 == 0xd) {
                local_31c = 0;
                goto LAB_1407a3a5f;
              }
              FUN_140042910(&DAT_14172c3d8,&local_328,&local_328);
            }
            goto LAB_1407a3a6a;
          }
          local_328 = (double)FUN_140e4b060(&local_328);
          local_31c = 0;
        }
LAB_1407a3a5f:
        local_328 = local_328 + 1.0;
      }
LAB_1407a3a6a:
      bVar1 = false;
      plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bd8);
      if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
        iVar3 = *(int *)(*plVar6 + 0x24);
      }
      local_ec = 0;
      local_f8 = (double)iVar3;
      iVar3 = FUN_140e851f0(&local_328,&local_f8,DAT_141955260,1);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if (iVar3 == -2 || -1 < iVar3) {
        if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_348);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if ((1 << ((byte)local_30c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_318);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_308);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        if ((1 << ((byte)local_31c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_328);
        }
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        _eh_vector_destructor_iterator_(local_248,0x10,0xe,FUN_140041b30);
        DAT_141dc7a50 = (undefined8 *)local_2f8;
        return param_3;
      }
      local_2e8 = 0x79;
      plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bd8);
      iVar3 = FUN_140e4a740(&local_328);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar7 = *plVar6, lVar7 != 0)) {
        if ((iVar3 < 0) || (*(int *)(lVar7 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar7 + 0x24));
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar7 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar6 != &local_338) {
        local_358 = *plVar6;
        lStack_350 = plVar6[1];
        if ((1 << ((byte)local_32c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_338);
        }
        FUN_140041b80(&local_338,&local_358);
      }
      local_2e8 = 0x7b;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a57840,0x80000000,&local_2d8,uVar10,
                    (ulonglong)in_stack_fffffffffffffca0 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar10 >> 0x20);
      lStack_350 = CONCAT44(uStack_2cc,uStack_2d0);
      local_358 = local_2d8;
      if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_358);
      local_d8 = local_248;
      local_358 = _DAT_1419e83d0;
      lStack_350 = uRam00000001419e83d8;
      if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_358);
      local_d0 = local_238;
      local_358 = _DAT_1419e83a0;
      lStack_350 = lRam00000001419e83a8;
      if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_358);
      local_c8 = local_228;
      ppdVar12 = &local_d8;
      uVar10 = CONCAT44(uVar4,DAT_141a00c58);
      plVar6 = (longlong *)FUN_140e634e0(param_1,param_2,&local_348,3,uVar10,ppdVar12);
      if (plVar6 != &local_298) {
        local_358 = *plVar6;
        lStack_350 = plVar6[1];
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_358);
      }
      FUN_140e87930(&local_338,DAT_141a57840,0x80000000,&local_298);
      local_2e8 = 0x7c;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a05568,0x80000000,&local_258,uVar10,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar10 >> 0x20);
      lStack_350 = CONCAT44(uStack_24c,uStack_250);
      local_358 = local_258;
      if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_358);
      local_d8 = local_248;
      local_358 = _DAT_1419e83d0;
      lStack_350 = uRam00000001419e83d8;
      if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_358);
      local_d0 = local_238;
      local_358 = _DAT_1419e8360;
      lStack_350 = lRam00000001419e8368;
      if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_358);
      local_c8 = local_228;
      ppdVar12 = &local_d8;
      uVar10 = CONCAT44(uVar4,DAT_141a00c58);
      plVar6 = (longlong *)FUN_140e634e0(param_1,param_2,&local_348,3,uVar10,ppdVar12);
      if (plVar6 != &local_2a8) {
        local_358 = *plVar6;
        lStack_350 = plVar6[1];
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_358);
      }
      FUN_140e87930(&local_338,DAT_141a05568,0x80000000,&local_2a8);
      local_2e8 = 0x7d;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      FUN_140e87440(&local_338,DAT_141a0a7f8,0x80000000,&local_268,uVar10 & 0xffffffffffffff00,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00);
      lStack_350 = CONCAT44(uStack_25c,uStack_260);
      local_358 = local_268;
      if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_358);
      local_d8 = local_248;
      local_358 = _DAT_141dc69b0;
      lStack_350 = uRam0000000141dc69b8;
      if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_358);
      local_d0 = local_238;
      local_358 = _DAT_1419e8360;
      lStack_350 = lRam00000001419e8368;
      if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_358);
      local_c8 = local_228;
      plVar6 = (longlong *)gml_Script_animation_end(param_1,param_2,&local_348,3,&local_d8);
      if (plVar6 != &local_2b8) {
        local_358 = *plVar6;
        lStack_350 = plVar6[1];
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        FUN_140041b80(&local_2b8,&local_358);
      }
      FUN_140e87930(&local_338,DAT_141a0a7f8,0x80000000,&local_2b8);
      local_2e8 = 0x7f;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      FUN_140e87170(&local_338,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
      FUN_140e87170(&local_338,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
      lStack_350 = CONCAT44(uStack_fc,uStack_100);
      local_358 = local_108;
      if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_358);
      local_d8 = local_248;
      lStack_350 = CONCAT44(uStack_10c,uStack_110);
      local_358 = local_118;
      if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_358);
      local_d0 = local_238;
      plVar6 = (longlong *)gml_Script_worldwide_load(param_1,param_2,&local_348,2,&local_d8);
      if (plVar6 != &local_2c8) {
        local_358 = *plVar6;
        lStack_350 = plVar6[1];
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_358);
      }
      local_2e8 = 0x80;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      FUN_140e87170(&local_2c8,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
      plVar6 = param_1;
      uVar10 = param_2;
      FUN_140e87170(&local_2c8,DAT_1419fe158,0x80000000,&local_138,param_1,param_2);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar11 = (ulonglong)plVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a578c0,0x80000000,&local_148,uVar11,uVar10);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a57930,0x80000000,&local_308,uVar11,uVar10);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a57840,0x80000000,&local_2d8,uVar11,uVar10);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a05568,0x80000000,&local_258,uVar11,uVar10);
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a0a7f8,0x80000000,&local_268,uVar11 & 0xffffffffffffff00,
                    uVar10);
      lStack_350 = CONCAT44(uStack_11c,uStack_120);
      local_358 = local_128;
      if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_248);
      }
      FUN_140041b80(local_248,&local_358);
      local_d8 = local_248;
      lStack_350 = CONCAT44(uStack_12c,uStack_130);
      local_358 = local_138;
      if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_358);
      local_d0 = local_238;
      lStack_350 = CONCAT44(uStack_13c,uStack_140);
      local_358 = local_148;
      if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_358);
      local_c8 = local_228;
      local_358 = DAT_1419df7b0;
      lStack_350 = _DAT_1419df7b8;
      if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_358);
      local_c0 = local_218;
      lStack_350 = CONCAT44(uStack_2fc,uStack_300);
      local_358 = local_308;
      if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_358);
      local_b8 = local_208;
      local_358 = _DAT_1419e83d0;
      lStack_350 = uRam00000001419e83d8;
      if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_358);
      local_b0 = local_1f8;
      local_358 = _DAT_1419e83d0;
      lStack_350 = uRam00000001419e83d8;
      if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_358);
      local_a8 = local_1e8;
      local_358 = _DAT_1419e8370;
      lStack_350 = uRam00000001419e8378;
      if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_358);
      local_a0 = local_1d8;
      uStack_26c = uStack_2cc;
      uStack_270 = uStack_2d0;
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
        local_278 = local_2d8;
      }
      else {
        FUN_1400419b0(&local_278,&local_2d8);
      }
      FUN_140042560(&local_278,&local_288);
      lStack_350 = CONCAT44(uStack_26c,uStack_270);
      local_358 = local_278;
      if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_358);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_98 = local_1c8;
      lStack_350 = CONCAT44(uStack_24c,uStack_250);
      local_358 = local_258;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_358);
      local_90 = local_1b8;
      lStack_350 = CONCAT44(uStack_25c,uStack_260);
      local_358 = local_268;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_358);
      local_88 = local_1a8;
      local_358 = DAT_1419df7b0;
      lStack_350 = _DAT_1419df7b8;
      if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_358);
      local_80 = local_198;
      local_358 = DAT_1419df7b0;
      lStack_350 = _DAT_1419df7b8;
      if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_358);
      local_78 = local_188;
      local_358 = DAT_1419df7b0;
      lStack_350 = _DAT_1419df7b8;
      if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_358);
      local_70 = local_178;
      ppdVar12 = &local_d8;
      gml_Script_draw_sprite_hires(param_1,param_2,&local_348,0xe,ppdVar12);
      local_2e8 = 0x82;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar11 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_338,DAT_141a57930,0x80000000,&local_308,uVar11,uVar10);
      FUN_140e87440(&local_308,DAT_141a07808,0x80000000,&local_158,uVar11 & 0xffffffffffffff00,
                    uVar10 & 0xffffffffffffff00);
      switch(uStack_2fc) {
      default:
switchD_1407a47a3_caseD_1:
        lVar7 = 0;
        break;
      case 6:
        lVar7 = local_308;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_308 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1407a47a3_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar4 = FUN_140e4a8b0(&local_308);
        lVar7 = FUN_140e87250(uVar4);
      }
      in_stack_fffffffffffffca0 = (double **)0x0;
      pcVar9 = (code *)&local_158;
      uVar8 = FUN_140e63610(lVar7,param_2,&local_348,0,pcVar9,0);
      local_dc = 0;
      local_e8 = 0x3ff0000000000000;
      uVar2 = FUN_140e851f0(uVar8,&local_e8,DAT_141955260,1);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
    } while (0x7fffffff < uVar2);
    local_2e8 = 0x83;
    uVar11 = (ulonglong)in_stack_fffffffffffffca0 & 0xffffffffffffff00;
    uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_338,DAT_141a08b78,0x80000000,&local_318,uVar10,uVar11);
    uVar2 = local_30c & 0xffffff;
    if (uVar2 == 0) {
LAB_1407a48d0:
      local_318 = local_318 + 1.0;
    }
    else {
      if (uVar2 == 1) {
        local_318 = (double)FUN_140e4b060(&local_318);
        local_30c = 0;
        goto LAB_1407a48d0;
      }
      if (uVar2 == 7) {
        local_318 = (double)CONCAT44(local_318._4_4_,local_318._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_318 = (double)((longlong)local_318 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_30c = 0;
          goto LAB_1407a48d0;
        }
        FUN_140042910(&DAT_14172c3d8,&local_318,&local_318);
      }
    }
    FUN_140e87930(&local_338,DAT_141a08b78,0x80000000,&local_318);
    local_2e8 = 0x84;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a08b58);
    in_stack_fffffffffffffca0 = (double **)(uVar11 & 0xffffffffffffff00);
    pcVar9 = (code *)(uVar10 & 0xffffffffffffff00);
    FUN_140e87440(&local_338,DAT_141a08b78,0x80000000,&local_168,pcVar9,in_stack_fffffffffffffca0);
    iVar3 = FUN_140e851f0(&local_168,uVar8,DAT_141955260,1);
    if (0 < iVar3) {
      local_2e8 = 0x85;
      if ((1 << ((byte)local_33c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_348);
      }
      local_348 = 0;
      local_340 = 0;
      local_33c = 5;
      pcVar9 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bc8);
      local_d8 = &local_328;
      in_stack_fffffffffffffca0 = &local_d8;
      FUN_140e63610(param_1,param_2,&local_348,1,pcVar9,in_stack_fffffffffffffca0);
    }
  } while( true );
}

