// gml_Script____struct___146_anon_12618_DefineBuffs_OFFERINGSINIT @ 0x1403ce0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___146_anon_12618_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,longlong *param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined4 uVar10;
  double dVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 uVar13;
  ulonglong uVar12;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  longlong *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  longlong *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_240 = "gml_Script_anon@11816@DefineBuffs@OFFERINGSINIT";
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  local_238 = 0x1ca;
  uVar13 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_148,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uVar10 = 0xffffff;
  bVar9 = 0xff;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_26c = 0;
  local_278 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_238 = 0x1cc;
  local_1c8 = (longlong *)CONCAT44(uRam0000000141dc6554,_DAT_141dc6550);
  uStack_1c0 = uRam0000000141dc6558;
  uStack_1bc = uRam0000000141dc655c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  local_a8 = local_128;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_25c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_260 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_268 = (longlong *)*param_5;
  }
  else {
    FUN_1400419b0(&local_268);
  }
  local_24c = 0;
  local_258 = 0x3fd999999999999a;
  FUN_140042560(&local_268,&local_258);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  ppuVar15 = &local_a8;
  uVar12 = CONCAT44(uVar13,DAT_141a0a0d8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar12,ppuVar15);
  uStack_21c = local_25c;
  uStack_220 = local_260;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
    local_228 = local_268;
  }
  else {
    FUN_1400419b0(&local_228,&local_268);
  }
  FUN_140042560(&local_228,uVar4);
  local_1c8 = local_228;
  uStack_1c0 = uStack_220;
  uStack_1bc = uStack_21c;
  FUN_140041b80(&local_1d8,&local_1c8);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_238 = 0x1ce;
  local_24c = 0xf;
  local_258 = 0x10000000000009d;
  iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_258);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uVar4 = local_1d8;
  if (0 < iVar3) {
    uVar1 = CONCAT44(uStack_1cc,uStack_1d0);
    do {
      local_238 = 0x1d0;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_24c = 10;
      local_258 = 2;
      iVar3 = FUN_140e851f0(uVar5,&local_258,DAT_141955260,0);
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if (iVar3 == 0) {
        local_238 = 0x1d0;
      }
      else {
        local_238 = 0x1d2;
        uStack_21c = 6;
        local_228 = local_res8;
        uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_228,DAT_141a0a828,0x80000000,&local_158,uVar12,uVar14);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_288 = local_158;
        uStack_280 = CONCAT44(uStack_14c,uStack_150);
        if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_288);
        local_238 = 0x1d4;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_278 = 0;
        local_270 = 0;
        local_26c = 5;
        local_25c = 6;
        local_268 = local_res8;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_178,uVar12,uVar14);
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_fc = 6;
        local_108 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_188,uVar12,
                      uVar14 & 0xffffffffffffff00);
        uVar10 = (undefined4)(uVar12 >> 0x20);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_288 = local_178;
        uStack_280 = CONCAT44(uStack_16c,uStack_170);
        if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_288);
        local_b8 = local_148;
        local_288 = local_188;
        uStack_280 = CONCAT44(uStack_17c,uStack_180);
        if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_288);
        local_b0 = local_138;
        local_288 = CONCAT44(uRam0000000141dd267c,_DAT_141dd2678);
        uStack_280 = CONCAT44(DAT_141dd2684,uRam0000000141dd2680);
        if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_288);
        local_a8 = local_128;
        uStack_1bc = 0xf;
        local_1c8 = (longlong *)0x1000000000000b7;
        local_288 = 0x1000000000000b7;
        uStack_280 = CONCAT44(0xf,uStack_1c0);
        if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_288);
        local_a0 = local_118;
        ppuVar15 = &local_b8;
        uVar12 = CONCAT44(uVar10,DAT_141a0a7c8);
        FUN_140e634e0(local_res8,local_res10,&local_278,4,uVar12,ppuVar15);
        iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10);
        if (0 < iVar3) {
          do {
            local_238 = 0x1d6;
            pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5f28);
            if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
              dVar11 = *pdVar6;
            }
            else {
              dVar11 = (double)FUN_140e4b060(pdVar6);
            }
            FUN_140ec60c0((longlong)dVar11,0xffffffff);
            local_238 = 0x1d8;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            local_ec = 6;
            local_f8 = local_res10;
            FUN_140e87440(&local_f8,DAT_1419f5b18,0x80000000,&local_198,uVar12 & 0xffffffffffffff00,
                          (ulonglong)ppuVar15 & 0xffffffffffffff00);
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            uVar14 = 0;
            puVar7 = &local_198;
            FUN_140e63610(local_res10,local_res10,&local_278,0,puVar7,0);
            local_238 = 0x1db;
            FUN_140ec7870();
            local_238 = 0x1dd;
            local_dc = 6;
            local_e8 = local_res10;
            uVar14 = uVar14 & 0xffffffffffffff00;
            uVar12 = (ulonglong)puVar7 & 0xffffffffffffff00;
            FUN_140e87440(&local_e8,DAT_141a0a728,0x80000000,&local_1a8,uVar12,uVar14);
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            local_288 = local_1a8;
            uStack_280 = CONCAT44(uStack_19c,uStack_1a0);
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_288);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1f8);
            local_238 = 0x1de;
            local_cc = 6;
            local_d8 = local_res10;
            uVar14 = uVar14 & 0xffffffffffffff00;
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_d8,DAT_141a0cfc8,0x80000000,&local_1b8,uVar12,uVar14);
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            local_288 = local_1b8;
            uStack_280 = CONCAT44(uStack_1ac,uStack_1b0);
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140041b80(&local_208,&local_288);
            FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_208);
            local_238 = 0x1e0;
            puVar7 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
            puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
            FUN_140e609c0(local_res8);
            if (puVar7 != puVar8) {
              local_288 = *puVar7;
              uStack_280 = puVar7[1];
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar8);
              }
              FUN_140041b80(puVar8,&local_288);
            }
            FUN_140e60910(1);
            local_238 = 0x1e1;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5c98);
            local_bc = 6;
            local_c8 = local_res10;
            ppuVar15 = (undefined1 **)(uVar14 & 0xffffffffffffff00);
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(&local_c8,DAT_141a0a828,0x80000000,&local_1e8,uVar12,ppuVar15);
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            FUN_140e609c0(local_res8);
            if (&local_1e8 != puVar7) {
              local_288 = local_1e8;
              uStack_280 = CONCAT44(uStack_1dc,uStack_1e0);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_288);
            }
            FUN_140e60910(1);
            local_238 = 0x1e3;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            local_20c = 0;
            local_218 = 0;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000);
            local_238 = 0x1e4;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ab8);
            FUN_140e609c0(local_res8);
            if (&local_1d8 != puVar7) {
              local_288 = uVar4;
              uStack_280 = uVar1;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_288);
            }
            FUN_140e60910(1);
            cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_78,&local_res8,&local_res10);
        if (local_68 != 0) {
          FUN_140e4cd60();
        }
        uVar10 = local_15c;
      }
      bVar9 = (byte)uVar10;
      cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return param_3;
}

