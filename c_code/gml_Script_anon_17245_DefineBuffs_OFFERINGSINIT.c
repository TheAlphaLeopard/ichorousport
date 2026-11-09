// gml_Script_anon_17245_DefineBuffs_OFFERINGSINIT @ 0x1403d5100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_17245_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  byte bVar9;
  undefined4 uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  undefined4 uVar14;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong in_stack_fffffffffffffde0;
  double **ppdVar15;
  longlong *local_218;
  undefined4 local_20c;
  double local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 local_12c;
  double local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_1f0 = "gml_Script_anon@16422@DefineBuffs@OFFERINGSINIT";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x296;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0.0;
  uStack_19c = 0xffffff;
  local_1a8 = 0.0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0.0;
  uVar10 = 0xffffff;
  bVar9 = 0xff;
  uStack_18c = 0xffffff;
  local_198 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x298;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_1cc = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_1d0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_1d8);
  }
  local_20c = 7;
  local_218 = (longlong *)CONCAT44(local_218._4_4_,3);
  FUN_140042560(&local_1d8,&local_218);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_168 = local_1d8;
  uStack_160 = uStack_1d0;
  uStack_15c = uStack_1cc;
  FUN_140041b80(&local_178,&local_168);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1e8 = 0x29a;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 0;
  local_1a8 = -4.0;
  local_1e8 = 0x29c;
  local_20c = 0xf;
  local_218 = (longlong *)0x10000000000009d;
  iVar4 = FUN_140e63cb0(local_a8,&local_res8,&local_res10,&local_218);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (0 < iVar4) {
    do {
      local_1e8 = 0x29e;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      local_20c = 10;
      local_218 = (longlong *)0x2;
      iVar4 = FUN_140e851f0(uVar6,&local_218,DAT_141955260,0);
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if (iVar4 == 0) {
        local_1e8 = 0x29e;
      }
      else {
        local_1e8 = 0x29f;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
        uStack_1cc = 10;
        local_1d8 = 2;
        iVar4 = FUN_140e851f0(uVar6,&local_1d8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (iVar4 == 0) {
          local_1e8 = 0x2a1;
          local_20c = 6;
          local_218 = local_res8;
          pcVar11 = (code *)((ulonglong)pcVar11 & 0xffffffffffffff00);
          FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_188,pcVar11,
                        in_stack_fffffffffffffde0 & 0xffffffffffffff00);
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_168 = local_188;
          uStack_160 = uStack_180;
          uStack_15c = uStack_17c;
          if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_168);
          local_1e8 = 0x2a2;
          break;
        }
        local_1e8 = 0x29f;
      }
      cVar3 = FUN_140e643f0(local_a8,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  uVar14 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  FUN_140e63970(local_a8,&local_res8,&local_res10);
  local_1e8 = 0x2a6;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_e8 = &local_1a8;
  ppdVar15 = &local_e8;
  uVar12 = CONCAT44(uVar14,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar12,ppdVar15);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    local_1e8 = 0x2a7;
  }
  else {
    local_1e8 = 0x2a9;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_1fc = 0;
    local_208 = 0.0;
    local_1e8 = 0x2ab;
    local_20c = 0xf;
    local_218 = (longlong *)0x10000000000009d;
    iVar4 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,&local_218);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    dVar2 = local_178;
    bVar9 = 0xff;
    if (0 < iVar4) {
      uVar6 = CONCAT44(uStack_16c,uStack_170);
      do {
        local_1e8 = 0x2ad;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
        local_20c = 10;
        local_218 = (longlong *)0x2;
        iVar4 = FUN_140e851f0(uVar7,&local_218,DAT_141955260,0);
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if (iVar4 == 0) {
          local_1e8 = 0x2ad;
        }
        else {
          local_1e8 = 0x2ae;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
          uStack_1cc = 10;
          local_1d8 = 1;
          iVar4 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,0);
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          if (iVar4 == 0) {
            local_1e8 = 0x2b0;
            local_12c = 6;
            local_138 = local_res8;
            FUN_140e87440(&local_138,DAT_141a0a828,0x80000000,&local_188,uVar12 & 0xffffffffffffff00
                          ,(ulonglong)ppdVar15 & 0xffffffffffffff00);
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_1c8 = (double)local_188;
            uStack_1c0 = CONCAT44(uStack_17c,uStack_180);
            if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_1c8);
            local_1e8 = 0x2b1;
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            local_1b8 = 0;
            local_1b0 = 0;
            local_1ac = 5;
            FUN_140e87170(&local_1a8,DAT_1419fe0e8,0x80000000,&local_148,local_res8,local_res10);
            plVar13 = local_res8;
            FUN_140e87170(&local_1a8,DAT_1419fe158,0x80000000,&local_158,local_res8,local_res10);
            uVar10 = (undefined4)((ulonglong)plVar13 >> 0x20);
            local_1c8 = (double)local_148;
            uStack_1c0 = CONCAT44(uStack_13c,uStack_140);
            if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_128);
            }
            FUN_140041b80(local_128,&local_1c8);
            local_e8 = local_128;
            local_1c8 = (double)local_158;
            uStack_1c0 = CONCAT44(uStack_14c,uStack_150);
            if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            FUN_140041b80(local_118,&local_1c8);
            local_e0 = local_118;
            local_1c8 = (double)CONCAT44(uRam0000000141dd287c,_DAT_141dd2878);
            uStack_1c0 = CONCAT44(DAT_141dd2884,uRam0000000141dd2880);
            if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_108);
            }
            FUN_140041b80(local_108,&local_1c8);
            local_d8 = local_108;
            uStack_15c = 0xf;
            local_168 = 0x10000000000012b;
            local_1c8 = 7.291122019556882e-304;
            uStack_1c0 = CONCAT44(0xf,uStack_160);
            if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_1c8);
            local_d0 = local_f8;
            ppdVar15 = &local_e8;
            uVar12 = CONCAT44(uVar10,DAT_141a0a7c8);
            FUN_140e634e0(local_res8,local_res10,&local_1b8,4,uVar12,ppdVar15);
            iVar4 = FUN_140e63cb0(local_88,&local_res8,&local_res10);
            dVar1 = local_198;
            if (0 < iVar4) {
              uVar7 = CONCAT44(uStack_18c,uStack_190);
              do {
                local_1e8 = 0x2b3;
                pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5a08);
                FUN_140e609c0(local_res8);
                if (&local_208 != pdVar8) {
                  local_1c8 = local_208;
                  uStack_1c0 = CONCAT44(uStack_1fc,uStack_200);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar8);
                  }
                  FUN_140041b80(pdVar8,&local_1c8);
                }
                FUN_140e60910(1);
                local_1e8 = 0x2b4;
                pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
                FUN_140e609c0(local_res8);
                if (&local_1a8 != pdVar8) {
                  local_1c8 = local_1a8;
                  uStack_1c0 = CONCAT44(uStack_19c,uStack_1a0);
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar8);
                  }
                  FUN_140041b80(pdVar8,&local_1c8);
                }
                FUN_140e60910(1);
                local_1e8 = 0x2b5;
                pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
                FUN_140e609c0(local_res8);
                if (&local_198 != pdVar8) {
                  local_1c8 = dVar1;
                  uStack_1c0 = uVar7;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar8);
                  }
                  FUN_140041b80(pdVar8,&local_1c8);
                }
                FUN_140e60910(1);
                local_1e8 = 0x2b7;
                pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
                FUN_140e609c0(local_res8);
                if (&local_178 != pdVar8) {
                  local_1c8 = dVar2;
                  uStack_1c0 = uVar6;
                  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(pdVar8);
                  }
                  FUN_140041b80(pdVar8,&local_1c8);
                }
                FUN_140e60910(1);
                cVar3 = FUN_140e643f0(local_88,&local_res8,&local_res10);
              } while (cVar3 != '\0');
            }
            FUN_140e63970(local_88,&local_res8,&local_res10);
            local_1e8 = 0x2ba;
            uVar5 = uStack_1fc & 0xffffff;
            if (uVar5 == 0) {
LAB_1403d5b84:
              local_208 = local_208 + 1.0;
            }
            else {
              if (uVar5 == 1) {
                local_208 = (double)FUN_140e4b060(&local_208);
                uStack_1fc = 0;
                goto LAB_1403d5b84;
              }
              if (uVar5 == 7) {
                local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
              }
              else if (uVar5 == 10) {
                local_208 = (double)((longlong)local_208 + 1);
              }
              else {
                if (uVar5 == 0xd) {
                  uStack_1fc = 0;
                  goto LAB_1403d5b84;
                }
                FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
              }
            }
            if (local_78 != 0) {
              FUN_140e4cd60();
            }
            uVar10 = uStack_18c;
          }
          else {
            local_1e8 = 0x2ae;
          }
        }
        bVar9 = (byte)uVar10;
        cVar3 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
      local_b8 = 0;
    }
  }
  if (local_98 != 0) {
    FUN_140e4cd60();
    local_98 = 0;
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

