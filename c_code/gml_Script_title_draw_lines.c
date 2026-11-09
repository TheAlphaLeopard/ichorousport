// gml_Script_title_draw_lines @ 0x140262700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_title_draw_lines
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  undefined4 *puVar9;
  undefined1 ***pppuVar10;
  double *pdVar11;
  undefined1 **ppuVar12;
  undefined1 ***pppuVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffcb0;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  uint uStack_33c;
  undefined4 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_318;
  undefined4 uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined1 *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 *local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 *local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 *local_1a8;
  byte local_19c;
  undefined1 *local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158 [4];
  undefined4 local_148 [4];
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 **local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined1 **local_f0;
  undefined1 *local_e8;
  undefined1 **local_e0;
  undefined1 **local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_338 = 0;
  local_270 = "gml_Script_title_split_lines";
  local_278 = DAT_141dc7a50;
  local_268 = 0x19;
  DAT_141dc7a50 = &local_278;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_27c = 0xffffff;
  local_288 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_2cc = 0xffffff;
  local_2d8 = (undefined1 *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (undefined1 *)0x0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_2fc = 0xffffff;
  local_308 = 0.0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_324 = 0;
  local_330 = 0;
  local_2dc = 0;
  local_2e8 = 0;
  local_2ec = 0;
  local_2f8 = 0;
  local_214 = 0;
  local_220 = 0;
  local_224 = 0;
  local_230 = 0;
  local_234 = 0;
  local_240 = 0;
  local_244 = 0;
  local_250 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_268 = 0x1b;
  ppuVar12 = (undefined1 **)&DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1402628b2:
    pdVar11 = (double *)&DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (param_4 < 2) goto LAB_1402628b2;
    pdVar11 = (double *)param_5[1];
  }
  uStack_2bc = *(uint *)((longlong)pdVar11 + 0xc);
  uStack_2c0 = *(undefined4 *)(pdVar11 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = *pdVar11;
  }
  else {
    FUN_1400419b0(&local_2c8);
  }
  local_338 = 1;
  FUN_1400460e0(&local_2c8,puVar5);
  local_318 = (undefined1 *)local_2c8;
  uStack_310 = uStack_2c0;
  uStack_30c = uStack_2bc;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_318);
  local_338 = 0;
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_f0 = &local_1c8;
  local_318 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_310 = DAT_1419df7b8;
  uStack_30c = DAT_1419df7bc;
  if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_318);
  local_e8 = local_1b8;
  pppuVar10 = &local_f0;
  puVar5 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_330,2,pppuVar10);
  if (puVar5 != &local_288) {
    local_318 = (undefined1 *)*puVar5;
    uStack_310 = *(undefined4 *)(puVar5 + 1);
    uStack_30c = *(uint *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_318);
  }
  FUN_140e87440(&local_288,DAT_141a04df8,0x80000000,&local_78,
                (ulonglong)pppuVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffcb0 & 0xffffffffffffff00);
  if (param_4 < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
  }
  switch(local_27c) {
  default:
switchD_140262a49_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_288;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_288 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140262a49_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_288);
    uVar6 = FUN_140e87250(uVar2);
  }
  puVar7 = &local_78;
  uVar6 = FUN_140e63610(uVar6,param_2,&local_2e8,0,puVar7,0);
  uVar2 = (undefined4)((ulonglong)puVar7 >> 0x20);
  iVar3 = FUN_140e851f0(uVar6,puVar5,DAT_141955260,1);
  if (iVar3 != -2 && iVar3 < 1) {
    local_268 = 0x1b;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    if ((param_4 < 1) || (ppuVar12 = (undefined1 **)*param_5, ppuVar12 != &local_1a8)) {
      local_318 = *ppuVar12;
      uStack_310 = *(undefined4 *)(ppuVar12 + 1);
      uStack_30c = *(uint *)((longlong)ppuVar12 + 0xc);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_318);
    }
    local_e0 = &local_1a8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_2f8,1,CONCAT44(uVar2,DAT_1419fdca8),&local_e0);
    if (puVar5 != param_3) {
      local_318 = (undefined1 *)*puVar5;
      uStack_310 = *(undefined4 *)(puVar5 + 1);
      uStack_30c = *(uint *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      puVar5 = &local_318;
LAB_140263dfc:
      FUN_140041b80(param_3,puVar5);
    }
LAB_140263e05:
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_240);
    }
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_330);
    }
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_260);
    }
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    _eh_vector_destructor_iterator_(&local_1f8,0x10,0xc,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_278;
    return param_3;
  }
  local_268 = 0x1d;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2cc = 0;
  local_2d8 = &DAT_bff0000000000000;
  local_268 = 0x1e;
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_88);
  local_318 = local_88;
  uStack_310 = uStack_80;
  uStack_30c = uStack_7c;
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  FUN_140041b80(&local_260,&local_318);
  local_268 = 0x1f;
  if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_330);
  }
  local_330 = 0;
  local_328 = 0;
  local_324 = 5;
  if (param_4 < 1) {
    ppuVar8 = (undefined1 **)&DAT_1419df7b0;
  }
  else {
    ppuVar8 = (undefined1 **)*param_5;
    if (ppuVar8 == &local_1f8) goto LAB_140262cc4;
  }
  local_318 = *ppuVar8;
  uStack_310 = *(undefined4 *)(ppuVar8 + 1);
  uStack_30c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
  if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_318);
LAB_140262cc4:
  local_108 = &local_1f8;
  puVar5 = (undefined8 *)CONCAT44(uVar2,DAT_141a07b08);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_330,1,puVar5,&local_108);
  if (puVar7 != &local_138) {
    local_318 = (undefined1 *)*puVar7;
    uStack_310 = *(undefined4 *)(puVar7 + 1);
    uStack_30c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_318);
  }
  local_268 = 0x21;
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2fc = 0;
  local_308 = 2.0;
  bVar1 = true;
  do {
    uVar2 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (!bVar1) {
      local_268 = 0x21;
      uVar4 = uStack_2fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_308 = (double)CONCAT44(local_308._4_4_,(int)local_308 + 1);
          }
          else if (uVar4 == 10) {
            local_308 = (double)((longlong)local_308 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              uStack_2fc = 0;
              goto LAB_140262ddc;
            }
            FUN_140042910(&DAT_14172c3d8,&local_308,&local_308);
          }
          goto LAB_140262de6;
        }
        local_308 = (double)FUN_140e4b060(&local_308);
        uStack_2fc = 0;
      }
LAB_140262ddc:
      local_308 = local_308 + 1.0;
    }
LAB_140262de6:
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_308,&local_138,DAT_141955260,1);
    if ((iVar3 == -2) || (-1 < iVar3)) break;
    local_268 = 0x23;
    if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_330);
    }
    local_330 = 0;
    local_328 = 0;
    local_324 = 5;
    if (param_4 < 1) {
      ppuVar8 = (undefined1 **)&DAT_1419df7b0;
LAB_140262e91:
      local_348 = *(undefined4 *)ppuVar8;
      uStack_344 = *(undefined4 *)((longlong)ppuVar8 + 4);
      uStack_340 = *(undefined4 *)(ppuVar8 + 1);
      uStack_33c = *(uint *)((longlong)ppuVar8 + 0xc);
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_348);
    }
    else {
      ppuVar8 = (undefined1 **)*param_5;
      if (ppuVar8 != &local_1f8) goto LAB_140262e91;
    }
    local_108 = &local_1f8;
    local_100 = &local_308;
    local_10c = DAT_141dce0c4;
    local_110 = DAT_141dce0c0;
    if ((1 << ((byte)DAT_141dce0c4 & 0x1f) & 0x46U) == 0) {
      local_118 = DAT_141dce0b8;
    }
    else {
      FUN_1400419b0(&local_118,&DAT_141dce0b8);
    }
    puVar5 = (undefined8 *)CONCAT44(uVar2,DAT_141a079a8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_330,2,puVar5,&local_108);
    iVar3 = FUN_140e851f0(uVar6,&local_118,DAT_141955260,0);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    uVar2 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (iVar3 == 0) {
      local_268 = 0x25;
      if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_330);
      }
      local_330 = 0;
      local_328 = 0;
      local_324 = 5;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_230);
      }
      local_230 = 0;
      local_228 = 0;
      local_224 = 5;
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_240 = 0;
      local_238 = 0;
      local_234 = 5;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      local_250 = 0;
      local_248 = 0;
      local_244 = 5;
      if (param_4 < 1) {
        ppuVar8 = (undefined1 **)&DAT_1419df7b0;
LAB_1402630db:
        local_348 = *(undefined4 *)ppuVar8;
        uStack_344 = *(undefined4 *)((longlong)ppuVar8 + 4);
        uStack_340 = *(undefined4 *)(ppuVar8 + 1);
        uStack_33c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
        if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_348);
      }
      else {
        ppuVar8 = (undefined1 **)*param_5;
        if (ppuVar8 != &local_1f8) goto LAB_1402630db;
      }
      local_108 = &local_1f8;
      local_348 = _DAT_1419e38e0;
      uStack_344 = uRam00000001419e38e4;
      uStack_340 = uRam00000001419e38e8;
      uStack_33c = uRam00000001419e38ec;
      if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_348);
      local_100 = &local_1e8;
      uStack_2bc = uStack_2fc;
      uStack_2c0 = uStack_300;
      if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_308;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_308);
      }
      local_338 = 0x10;
      uStack_30c = 7;
      local_318 = (undefined1 *)CONCAT44(local_318._4_4_,1);
      FUN_1400462a0(&local_2c8,&local_318);
      if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_318);
      }
      local_348 = (undefined4)local_2c8;
      uStack_344 = local_2c8._4_4_;
      uStack_340 = uStack_2c0;
      uStack_33c = uStack_2bc;
      if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_348);
      local_338 = 0;
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_f8 = local_1d8;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      pppuVar10 = &local_108;
      uVar6 = FUN_140e634e0(param_1,param_2,&local_2f8,3,CONCAT44(uVar2,DAT_141a01268),pppuVar10);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
        local_128 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_128,puVar5);
      }
      local_338 = 0x20;
      FUN_1400460e0(&local_128,uVar6);
      local_348 = (undefined4)local_128;
      uStack_344 = local_128._4_4_;
      uStack_340 = uStack_120;
      uStack_33c = uStack_11c;
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_348);
      local_338 = 0;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_f0 = &local_1c8;
      local_348 = (undefined4)DAT_1419df7b0;
      uStack_344 = DAT_1419df7b0._4_4_;
      uStack_340 = DAT_1419df7b8;
      uStack_33c = DAT_1419df7bc;
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_348);
      local_e8 = local_1b8;
      pppuVar13 = &local_f0;
      puVar5 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_2e8,2,pppuVar13);
      if (puVar5 != &local_298) {
        local_348 = *(undefined4 *)puVar5;
        uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_340 = *(undefined4 *)(puVar5 + 1);
        uStack_33c = *(uint *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_348);
      }
      uVar14 = (ulonglong)pppuVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_298,DAT_141a04df8,0x80000000,&local_98,uVar14,
                    (ulonglong)pppuVar10 & 0xffffffffffffff00);
      uVar2 = (undefined4)(uVar14 >> 0x20);
      if (param_4 < 1) {
        ppuVar8 = (undefined1 **)&DAT_1419df7b0;
LAB_140263430:
        local_348 = *(undefined4 *)ppuVar8;
        uStack_344 = *(undefined4 *)((longlong)ppuVar8 + 4);
        uStack_340 = *(undefined4 *)(ppuVar8 + 1);
        uStack_33c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
        if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_348);
      }
      else {
        ppuVar8 = (undefined1 **)*param_5;
        if (ppuVar8 != &local_1a8) goto LAB_140263430;
      }
      local_e0 = &local_1a8;
      local_348 = _DAT_1419e38e0;
      uStack_344 = uRam00000001419e38e4;
      uStack_340 = uRam00000001419e38e8;
      uStack_33c = uRam00000001419e38ec;
      if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_348);
      local_d8 = &local_198;
      local_d0 = &local_308;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      pppuVar10 = &local_e0;
      uVar6 = FUN_140e634e0(param_1,param_2,&local_240,3,CONCAT44(uVar2,DAT_141a090e8),pppuVar10);
      uStack_2ac = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_2b0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = (undefined1 *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar5);
      }
      local_338 = 0x40;
      FUN_1400460e0(&local_2b8,uVar6);
      local_348 = (undefined4)local_2b8;
      uStack_344 = local_2b8._4_4_;
      uStack_340 = uStack_2b0;
      uStack_33c = uStack_2ac;
      if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_348);
      local_338 = 0;
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_c8 = local_178;
      local_348 = (undefined4)DAT_1419df7b0;
      uStack_344 = DAT_1419df7b0._4_4_;
      uStack_340 = DAT_1419df7b8;
      uStack_33c = DAT_1419df7bc;
      if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_348);
      local_c0 = local_168;
      ppuVar8 = &local_c8;
      puVar5 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_230,2,ppuVar8);
      if (puVar5 != &local_2a8) {
        local_348 = *(undefined4 *)puVar5;
        uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_340 = *(undefined4 *)(puVar5 + 1);
        uStack_33c = *(uint *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        FUN_140041b80(&local_2a8,&local_348);
      }
      FUN_140e87440(&local_2a8,DAT_141a04df8,0x80000000,&local_a8,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00,
                    (ulonglong)pppuVar10 & 0xffffffffffffff00);
      switch(local_28c) {
      default:
switchD_1402636a6_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_298;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_298 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1402636a6_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar2 = FUN_140e4a8b0(&local_298);
        uVar6 = FUN_140e87250(uVar2);
      }
      puVar9 = (undefined4 *)FUN_140e63610(uVar6,param_2,&local_220,0,&local_98,0);
      if (puVar9 != local_158) {
        local_348 = *puVar9;
        uStack_344 = puVar9[1];
        uStack_340 = puVar9[2];
        uStack_33c = puVar9[3];
        if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_348);
      }
      local_b8 = local_158;
      switch(local_29c) {
      default:
switchD_140263769_caseD_1:
        uVar6 = 0;
        break;
      case 6:
        uVar6 = local_2a8;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_2a8 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140263769_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar2 = FUN_140e4a8b0(&local_2a8);
        uVar6 = FUN_140e87250(uVar2);
      }
      puVar5 = &local_a8;
      puVar9 = (undefined4 *)FUN_140e63610(uVar6,param_2,&local_250,0,puVar5,0);
      if (puVar9 != local_148) {
        local_348 = *puVar9;
        uStack_344 = puVar9[1];
        uStack_340 = puVar9[2];
        uStack_33c = puVar9[3];
        if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_348);
      }
      local_b0 = local_148;
      puVar7 = (undefined8 *)FUN_140e79090(&local_330,2,&local_b8);
      if (puVar7 != &local_208) {
        local_348 = *(undefined4 *)puVar7;
        uStack_344 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_340 = *(undefined4 *)(puVar7 + 1);
        uStack_33c = *(uint *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_348);
      }
      local_268 = 0x2a;
      iVar3 = FUN_140e851f0(&local_208,&local_260,DAT_141955260,1);
      if (iVar3 != -2 && iVar3 < 0) {
        local_268 = 0x2c;
        local_348 = (undefined4)local_208;
        uStack_344 = local_208._4_4_;
        uStack_340 = uStack_200;
        uStack_33c = uStack_1fc;
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        FUN_140041b80(&local_260,&local_348);
        local_268 = 0x2d;
        local_348 = (int)local_308;
        uStack_344 = local_308._4_4_;
        uStack_340 = uStack_300;
        uStack_33c = uStack_2fc;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        FUN_140041b80(&local_2d8,&local_348);
      }
    }
    else {
      local_268 = 0x23;
    }
  } while( true );
  local_268 = 0x31;
  uStack_30c = 0;
  local_318 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(&local_2d8,&local_318,DAT_141955260,0);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  uVar4 = 1 << ((byte)local_324 & 0x1f);
  if (iVar3 == 0) {
    local_268 = 0x31;
    if ((uVar4 & 0x46) != 0) {
      FUN_140041a50(&local_330);
    }
    local_330 = 0;
    local_328 = 0;
    local_324 = 5;
    if ((param_4 < 1) || (ppuVar12 = (undefined1 **)*param_5, ppuVar12 != &local_1f8)) {
      local_348 = *(undefined4 *)ppuVar12;
      uStack_344 = *(undefined4 *)((longlong)ppuVar12 + 4);
      uStack_340 = *(undefined4 *)(ppuVar12 + 1);
      uStack_33c = *(uint *)((longlong)ppuVar12 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_348);
    }
    local_108 = &local_1f8;
    pppuVar10 = &local_108;
    uVar6 = 1;
  }
  else {
    local_268 = 0x33;
    if ((uVar4 & 0x46) != 0) {
      FUN_140041a50(&local_330);
    }
    local_330 = 0;
    local_328 = 0;
    local_324 = 5;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    if (param_4 < 1) {
      ppuVar8 = (undefined1 **)&DAT_1419df7b0;
LAB_140263a9f:
      local_348 = *(undefined4 *)ppuVar8;
      uStack_344 = *(undefined4 *)((longlong)ppuVar8 + 4);
      uStack_340 = *(undefined4 *)(ppuVar8 + 1);
      uStack_33c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_348);
    }
    else {
      ppuVar8 = (undefined1 **)*param_5;
      if (ppuVar8 != &local_1f8) goto LAB_140263a9f;
    }
    local_108 = &local_1f8;
    local_348 = _DAT_1419e38e0;
    uStack_344 = uRam00000001419e38e4;
    uStack_340 = uRam00000001419e38e8;
    uStack_33c = uRam00000001419e38ec;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_348);
    local_100 = &local_1e8;
    uStack_2ac = local_2cc;
    uStack_2b0 = local_2d0;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
      local_2b8 = local_2d8;
    }
    else {
      FUN_1400419b0(&local_2b8,&local_2d8);
    }
    local_338 = 0x80;
    uStack_30c = 7;
    local_318 = (undefined1 *)CONCAT44(local_318._4_4_,1);
    FUN_1400462a0(&local_2b8,&local_318);
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    local_348 = (undefined4)local_2b8;
    uStack_344 = local_2b8._4_4_;
    uStack_340 = uStack_2b0;
    uStack_33c = uStack_2ac;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_348);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_f8 = local_1d8;
    if ((param_4 < 1) || (ppuVar12 = (undefined1 **)*param_5, ppuVar12 != &local_1c8)) {
      local_348 = *(undefined4 *)ppuVar12;
      uStack_344 = *(undefined4 *)((longlong)ppuVar12 + 4);
      uStack_340 = *(undefined4 *)(ppuVar12 + 1);
      uStack_33c = *(undefined4 *)((longlong)ppuVar12 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_348);
    }
    local_f0 = &local_1c8;
    local_348 = _DAT_1419e38e0;
    uStack_344 = uRam00000001419e38e4;
    uStack_340 = uRam00000001419e38e8;
    uStack_33c = uRam00000001419e38ec;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_348);
    local_e8 = local_1b8;
    local_e0 = &local_2d8;
    uVar6 = CONCAT44(uVar2,DAT_141a01268);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2e8,3,uVar6,&local_108);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((undefined1 **)puVar5 != &local_198) {
      local_348 = *(undefined4 *)puVar5;
      uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_340 = *(undefined4 *)(puVar5 + 1);
      uStack_33c = *(uint *)((longlong)puVar5 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_348);
    }
    local_d8 = &local_198;
    uVar6 = CONCAT44(uVar2,DAT_141a090e8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,3,uVar6,&local_f0);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar5 != &local_188) {
      local_348 = *(undefined4 *)puVar5;
      uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_340 = *(undefined4 *)(puVar5 + 1);
      uStack_33c = *(uint *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_348);
    }
    local_d0 = &local_188;
    pppuVar10 = &local_d8;
    uVar6 = 2;
  }
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_330,uVar6,CONCAT44(uVar2,DAT_1419fdca8),pppuVar10);
  if (puVar5 == param_3) goto LAB_140263e05;
  local_348 = *(undefined4 *)puVar5;
  uStack_344 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_340 = *(undefined4 *)(puVar5 + 1);
  uStack_33c = *(uint *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  puVar5 = (undefined8 *)&local_348;
  goto LAB_140263dfc;
}

