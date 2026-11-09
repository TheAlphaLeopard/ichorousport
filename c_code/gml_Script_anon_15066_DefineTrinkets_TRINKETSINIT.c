// gml_Script_anon_15066_DefineTrinkets_TRINKETSINIT @ 0x1405f1730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_15066_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar10;
  undefined4 uVar11;
  longlong **in_stack_fffffffffffffdc0;
  ulonglong uVar12;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong local_218;
  uint local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong local_138 [2];
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [12];
  byte local_bc;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_1f0 = "gml_Script_anon@14450@DefineTrinkets@TRINKETSINIT";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x23b;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_21c = 0;
  local_228 = 0;
  local_13c = 0;
  local_148 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x23d;
  local_238 = (longlong *)CONCAT44(uRam00000001419e6b74,_DAT_1419e6b70);
  uStack_230 = uRam00000001419e6b78;
  uStack_22c = uRam00000001419e6b7c;
  if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_238);
  local_b0 = local_128;
  ppuVar10 = &local_b0;
  uVar4 = gml_Script_choose_weighted(local_res8,local_res10,&local_228,1,ppuVar10);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_1e8 = 0x23f;
    plVar5 = (longlong *)FUN_140e8da20(&local_148,local_res8,0);
    if (plVar5 != &local_218) {
      local_238 = (longlong *)*plVar5;
      uStack_230 = (undefined4)plVar5[1];
      uStack_22c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_238);
    }
    local_1e8 = 0x240;
    local_1ac = 0xf;
    local_1b8 = 0x10000000000009d;
    iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_1b8);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    puVar9 = &DAT_1419df7b0;
    if (0 < iVar3) {
      do {
        local_1e8 = 0x242;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
        local_1ac = 10;
        local_1b8 = 2;
        iVar3 = FUN_140e851f0(uVar4,&local_1b8,DAT_141955260,0);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        if (iVar3 == 0) {
          local_1e8 = 0x242;
        }
        else {
          local_1e8 = 0x243;
          local_14c = 6;
          local_158 = local_res8;
          uVar12 = (ulonglong)in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
          uVar8 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_158,DAT_141a0a828,0x80000000,&local_1c8,uVar8,uVar12);
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          if (param_4 < 1) {
            puVar7 = &DAT_1419df7b0;
          }
          else {
            puVar7 = (undefined8 *)*param_5;
          }
          in_stack_fffffffffffffdc0 = (longlong **)(uVar12 & 0xffffffffffffff00);
          ppuVar10 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
          FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_168,ppuVar10,
                        in_stack_fffffffffffffdc0);
          iVar3 = FUN_140e851f0(&local_1c8,&local_168,DAT_141955260,0);
          if (iVar3 == 0) {
            local_1e8 = 0x243;
          }
          else {
            local_1e8 = 0x245;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            uStack_22c = 6;
            local_238 = local_res8;
            uVar8 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_141a0a828,0x80000000,&local_1c8,uVar8,
                          (ulonglong)in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar8 >> 0x20);
            if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_b8 = &local_218;
            local_208 = (undefined4)local_1c8;
            uStack_204 = local_1c8._4_4_;
            uStack_200 = uStack_1c0;
            uStack_1fc = uStack_1bc;
            if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_128);
            }
            FUN_140041b80(local_128,&local_208);
            local_b0 = local_128;
            in_stack_fffffffffffffdc0 = &local_b8;
            ppuVar10 = (undefined1 **)CONCAT44(uVar11,DAT_1419fe568);
            FUN_140e634e0(local_res8,local_res10,&local_228,2,ppuVar10,in_stack_fffffffffffffdc0);
          }
        }
        cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    if (((local_20c == 2) && (local_218 != 0)) && (*(int *)(local_218 + 0x24) != 0)) {
      local_1e8 = 0x24b;
      dVar1 = (double)FUN_140e78f00((longlong)(*(int *)(local_218 + 0x24) + -1));
      iVar3 = (int)dVar1;
      plVar5 = (longlong *)0x0;
      if (((local_20c & 0xffffff) == 2) && (local_218 != 0)) {
        if ((iVar3 < 0) || (*(int *)(local_218 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(local_218 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_218 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_218;
      }
      iVar3 = FUN_140e63cb0(local_58,&local_res8,&local_res10,plVar5);
      if (0 < iVar3) {
        local_1e8 = 0x24d;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d4 = 5;
        uStack_22c = 6;
        local_238 = local_res8;
        uVar12 = (ulonglong)in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
        uVar8 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_178,uVar8,uVar12);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_22c = 6;
        local_238 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_188,uVar8,uVar12);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (param_4 < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*param_5;
        }
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_198,uVar8,uVar12);
        uStack_22c = 6;
        local_238 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_141a0a828,0x80000000,&local_1c8,uVar8,uVar12);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (0 < param_4) {
          puVar9 = (undefined8 *)*param_5;
        }
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(puVar9,DAT_141a0a7d8,0x80000000,&local_1a8,uVar8,uVar12 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar8 >> 0x20);
        uVar6 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
        if (uVar6 == 0xf) {
          uVar8 = 0x4000004;
        }
        else {
          uVar8 = (ulonglong)(uVar6 | 0x1000000);
        }
        uStack_22c = 0xf;
        local_238 = (longlong *)(uVar8 << 0x20 | (ulonglong)(DAT_141a575a0 & 0xffffff));
        FUN_140041c60(local_138,&local_238);
        local_b8 = local_138;
        local_208 = (undefined4)local_178;
        uStack_204 = local_178._4_4_;
        uStack_200 = uStack_170;
        uStack_1fc = uStack_16c;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_208);
        local_b0 = local_128;
        local_208 = (undefined4)local_188;
        uStack_204 = local_188._4_4_;
        uStack_200 = uStack_180;
        uStack_1fc = uStack_17c;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_208);
        local_a8 = local_118;
        local_208 = (undefined4)local_198;
        uStack_204 = local_198._4_4_;
        uStack_200 = uStack_190;
        uStack_1fc = uStack_18c;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_208);
        local_a0 = local_108;
        local_208 = (undefined4)local_1c8;
        uStack_204 = local_1c8._4_4_;
        uStack_200 = uStack_1c0;
        uStack_1fc = uStack_1bc;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_208);
        local_98 = local_f8;
        local_208 = (undefined4)local_1a8;
        uStack_204 = local_1a8._4_4_;
        uStack_200 = uStack_1a0;
        uStack_1fc = uStack_19c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_208);
        local_90 = local_e8;
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1e0,6,CONCAT44(uVar11,DAT_1419fd6d8),
                              &local_b8);
        FUN_140041c60(local_d8,uVar4);
        local_88 = local_d8;
        local_208 = (undefined4)DAT_1419df7b0;
        uStack_204 = DAT_1419df7b0._4_4_;
        uStack_200 = DAT_1419df7b8;
        uStack_1fc = DAT_1419df7bc;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_208);
        local_80 = local_c8;
        gml_Script_draw_line_sprite(local_res8,local_res10,&local_228,2,&local_88);
        local_1e8 = 0x24e;
      }
      FUN_140e63970(local_58,&local_res8,&local_res10);
      if (local_48 != 0) {
        FUN_140e4cd60();
        local_48 = 0;
      }
    }
    else {
      local_1e8 = 0x249;
    }
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

