// gml_Script_anon_11816_DefineBuffs_OFFERINGSINIT @ 0x1403cd030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11816_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 **ppuVar9;
  undefined8 *puVar10;
  longlong *local_res8;
  ulonglong local_res10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint7 uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffdb0;
  uint7 uVar16;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_1e0 = "gml_Script_anon@11158@DefineBuffs@OFFERINGSINIT";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x1ad;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = (undefined1 *)0x0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = (undefined1 *)0x0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = (undefined1 *)0x0;
  local_20c = 0;
  local_218 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1d8 = 0x1af;
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_220 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_228 = (undefined1 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_228);
  }
  uStack_22c = 7;
  local_238 = (undefined1 *)CONCAT44(local_238._4_4_,5);
  FUN_140042560(&local_228,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_248 = local_228;
  uStack_240 = CONCAT44(uStack_21c,uStack_220);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_248);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_98 = local_d8;
  local_248 = (undefined1 *)CONCAT44(uRam00000001419e4744,_DAT_1419e4740);
  uStack_240 = CONCAT44(uRam00000001419e474c,uRam00000001419e4748);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_248);
  local_90 = local_c8;
  ppuVar9 = &local_98;
  puVar7 = (undefined8 *)gml_Script_bm_string_width(local_res8,local_res10,&local_218,2,ppuVar9);
  if (puVar7 != &local_1a0) {
    local_248 = (undefined1 *)*puVar7;
    uStack_240 = puVar7[1];
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    FUN_140041b80(&local_1a0,&local_248);
  }
  local_1d8 = 0x1b0;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar11 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1eed0,0x80000000,&local_1b0,uVar11,in_stack_fffffffffffffdb0);
  uStack_21c = local_1a4;
  uStack_220 = local_1a8;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
    local_228 = local_1b0;
  }
  else {
    FUN_1400419b0(&local_228,&local_1b0);
  }
  uStack_22c = 7;
  local_238 = (undefined1 *)CONCAT44(local_238._4_4_,0xb4);
  FUN_1400460e0(&local_228,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_248 = local_228;
  uStack_240 = CONCAT44(uStack_21c,uStack_220);
  FUN_140041b80(&local_168,&local_248);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_1d8 = 0x1b1;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a0a7d8,0x80000000,&local_108,uVar11,in_stack_fffffffffffffdb0);
  local_248 = (undefined1 *)local_108;
  uStack_240 = CONCAT44(uStack_fc,uStack_100);
  FUN_140041b80(&local_178,&local_248);
  local_1d8 = 0x1b2;
  if (1 < param_4) {
    puVar10 = (undefined8 *)param_5[1];
  }
  FUN_140e87440(puVar10,DAT_141a1f4e0,0x80000000,&local_118,uVar11 & 0xffffffffffffff00,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  local_248 = (undefined1 *)local_118;
  uStack_240._0_4_ = uStack_110;
  uStack_240._4_4_ = uStack_10c;
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_248);
  local_1d8 = 0x1b4;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  local_a8 = &local_1a0;
  uVar8 = gml_Script_choose_weighted(local_res8,local_res10,&local_218,1,&local_a8);
  cVar5 = FUN_140e491e0(uVar8);
  if (cVar5 != '\0') {
    local_1d8 = 0x1b6;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_128,local_res8,local_res10);
    plVar12 = local_res8;
    uVar11 = local_res10;
    FUN_140e87170(&local_208,DAT_1419fe158,0x80000000,&local_138,local_res8,local_res10);
    uStack_22c = 0xf;
    local_238 = (undefined1 *)0x100000000000106;
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar13 = (ulonglong)plVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_238,DAT_141a0a958,0x80000000,&local_190,uVar13,uVar11);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_248 = (undefined1 *)local_128;
    uStack_240 = CONCAT44(uStack_11c,uStack_120);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_248);
    local_a0 = local_e8;
    local_248 = (undefined1 *)local_138;
    uStack_240 = CONCAT44(uStack_12c,uStack_130);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_248);
    local_98 = local_d8;
    local_248 = (undefined1 *)CONCAT44(uRam0000000141dd267c,_DAT_141dd2678);
    uStack_240._0_4_ = uRam0000000141dd2680;
    uStack_240._4_4_ = DAT_141dd2684;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_248);
    local_90 = local_c8;
    uStack_22c = 0;
    local_238 = &DAT_bff0000000000000;
    iVar6 = FUN_140e851f0(&local_190,&local_238,DAT_141955260,0);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uVar16 = (uint7)(uVar11 >> 8);
    uVar14 = (uint7)(uVar13 >> 8);
    if (iVar6 == 0) {
      uStack_240._4_4_ = 0xf;
      local_248 = (undefined1 *)0x100000000000106;
      uVar13 = (ulonglong)uVar16 << 8;
      uVar11 = (ulonglong)uVar14 << 8;
      FUN_140e87440(&local_248,DAT_1419f58b8,0x80000000,&local_148,uVar11,uVar13);
      if ((1 << ((byte)uStack_240._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_148,DAT_141a0aaa8,0x80000000,&local_1d0,uVar11,
                    uVar13 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar11 >> 0x20);
      uStack_21c = local_1c4;
      uStack_220 = local_1c8;
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
        local_228 = local_1d0;
      }
      else {
        FUN_1400419b0(&local_228,&local_1d0);
      }
      ppuVar9 = &local_228;
      bVar2 = false;
      bVar1 = true;
    }
    else {
      uStack_14c = 0xf;
      local_158 = (undefined1 *)0x100000000000106;
      uVar13 = (ulonglong)uVar16 << 8;
      uVar11 = (ulonglong)uVar14 << 8;
      FUN_140e87440(&local_158,DAT_141a0a958,0x80000000,&local_190,uVar11,uVar13);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_190,DAT_141a0aaa8,0x80000000,&local_1c0,uVar11,
                    uVar13 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar11 >> 0x20);
      uStack_22c = local_1b4;
      uStack_230 = local_1b8;
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) == 0) {
        local_238 = local_1c0;
      }
      else {
        FUN_1400419b0(&local_238,&local_1c0);
      }
      ppuVar9 = &local_238;
      bVar2 = true;
      bVar1 = false;
    }
    local_158 = *ppuVar9;
    uStack_150 = *(undefined4 *)(ppuVar9 + 1);
    uStack_14c = *(undefined4 *)((longlong)ppuVar9 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_158);
    if ((bVar1) && ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_228);
    }
    if ((bVar2) && ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_238);
    }
    local_88 = local_b8;
    uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,CONCAT44(uVar15,DAT_141a0a7c8),
                          &local_a0);
    iVar6 = FUN_140e63cb0(local_80,&local_res8,&local_res10,uVar8);
    uVar4 = uStack_15c;
    uVar3 = local_168;
    uVar15 = uStack_16c;
    uVar8 = local_178;
    if (0 < iVar6) {
      do {
        local_1d8 = 0x1b8;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
        FUN_140e609c0(local_res8);
        if (&local_168 != puVar10) {
          local_248 = (undefined1 *)uVar3;
          uStack_240._0_4_ = uStack_160;
          uStack_240._4_4_ = uVar4;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_248);
        }
        FUN_140e60910(1);
        local_1d8 = 0x1b9;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
        FUN_140e609c0(local_res8);
        if (&local_178 != puVar10) {
          local_248 = (undefined1 *)uVar8;
          uStack_240._0_4_ = uStack_170;
          uStack_240._4_4_ = uVar15;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_248);
        }
        FUN_140e60910(1);
        local_1d8 = 0x1ba;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        FUN_140e609c0(local_res8);
        if (&local_208 != puVar10) {
          local_248 = (undefined1 *)local_208;
          uStack_240._0_4_ = uStack_200;
          uStack_240._4_4_ = uStack_1fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_248);
        }
        FUN_140e60910(1);
        local_1d8 = 0x1bc;
        puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6018);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        *puVar10 = 0x3ff0000000000000;
        cVar5 = FUN_140e643f0(local_80,&local_res8,&local_res10);
      } while (cVar5 != '\0');
    }
    FUN_140e63970(local_80,&local_res8,&local_res10);
    if (local_70 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

