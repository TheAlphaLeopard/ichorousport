// gml_Script____struct___153_anon_36908_DefineDebuffs_OFFERINGSINIT @ 0x1403fa600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___153_anon_36908_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffda0;
  undefined4 **ppuVar12;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined4 local_118 [4];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8 [4];
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res20 = 0;
  local_230 = "gml_Script_anon@36483@DefineDebuffs@OFFERINGSINIT";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x5f1;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_18c = 0xffffff;
  local_198 = 0;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f6198);
  local_214 = 0;
  local_220 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x5f3;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  uVar6 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_208,uVar6,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar6 >> 0x20);
  local_1a8 = (undefined4)local_208;
  uStack_1a4 = local_208._4_4_;
  uStack_1a0 = uStack_200;
  uStack_19c = uStack_1fc;
  if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1a8);
  local_a8 = local_118;
  ppuVar12 = &local_a8;
  uVar6 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_220,1,uVar6,ppuVar12);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_228 = 0x5f3;
  }
  else {
    local_228 = 0x5f4;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = *(undefined8 **)(param_5 + 8);
    }
    uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_208,uVar6,uVar10);
    ppuVar13 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(&local_208,DAT_141a57c50,0x80000000,&local_1b8,uVar6,ppuVar13);
    uStack_24c = 10;
    local_258 = 2;
    iVar2 = FUN_140e851f0(&local_1b8,&local_258,DAT_141955260,0);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if (iVar2 == 0) {
      local_228 = 0x5f6;
      uStack_24c = 0xf;
      local_258 = 0x10000000000009d;
      iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_258);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if (0 < iVar2) {
        do {
          local_228 = 0x5f8;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
          local_17c = 10;
          local_188 = 2;
          iVar2 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,0);
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          if (iVar2 == 0) {
            local_228 = 0x5f8;
          }
          else {
            local_228 = 0x5f9;
            uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
            local_16c = 10;
            local_178 = 1;
            iVar2 = FUN_140e851f0(uVar5,&local_178,DAT_141955260,0);
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            if (iVar2 == 0) {
              local_228 = 0x5fa;
              uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
              local_15c = 0;
              local_168 = 0;
              iVar2 = FUN_140e851f0(uVar5,&local_168,DAT_141955260,1);
              if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              if (iVar2 == -2 || 0 < iVar2) {
                local_228 = 0x5fc;
                uVar10 = uVar6;
                if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_220);
                  uVar10 = uVar6;
                }
                local_220 = 0;
                local_218 = 0;
                local_214 = 5;
                if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1d8);
                }
                local_1d8 = 0;
                local_1d0 = 0;
                local_1cc = 5;
                if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1e8);
                }
                local_1e8 = 0;
                local_1e0 = 0;
                local_1dc = 5;
                if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                local_1f8 = 0;
                local_1f0 = 0;
                local_1ec = 5;
                uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1edd0);
                uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
                uVar10 = uVar10 & 0xffffffffffffff00;
                FUN_140e87440(uVar3,DAT_1419f5c08,0x80000000,&local_198,uVar10,uVar14);
                if (param_4 < 2) {
                  puVar7 = &DAT_1419df7b0;
                }
                else {
                  puVar7 = *(undefined8 **)(param_5 + 8);
                }
                uVar10 = uVar10 & 0xffffffffffffff00;
                FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_208,uVar10,
                              uVar14 & 0xffffffffffffff00);
                uVar11 = (undefined4)(uVar10 >> 0x20);
                local_248 = _DAT_141dc6550;
                uStack_244 = uRam0000000141dc6554;
                uStack_240 = uRam0000000141dc6558;
                uStack_23c = uRam0000000141dc655c;
                if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_138);
                }
                FUN_140041b80(local_138,&local_248);
                local_b8 = local_138;
                local_248 = _DAT_141dc6550;
                uStack_244 = uRam0000000141dc6554;
                uStack_240 = uRam0000000141dc6558;
                uStack_23c = uRam0000000141dc655c;
                if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_128);
                }
                FUN_140041b80(local_128,&local_248);
                local_b0 = local_128;
                FUN_140e609c0(DAT_141a729d8);
                FUN_140e645a0(&local_158,
                              gml_Script_anon_38233_anon_36908_DefineDebuffs_OFFERINGSINIT,0);
                if (&local_158 != puVar4) {
                  local_248 = local_158;
                  uStack_244 = uStack_154;
                  uStack_240 = uStack_150;
                  uStack_23c = uStack_14c;
                  if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar4);
                  }
                  FUN_140041b80(puVar4,&local_248);
                }
                FUN_140e60910(1);
                if (puVar4 != local_118) {
                  local_248 = *puVar4;
                  uStack_244 = puVar4[1];
                  uStack_240 = puVar4[2];
                  uStack_23c = puVar4[3];
                  if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_118);
                  }
                  FUN_140041b80(local_118,&local_248);
                }
                if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_158);
                }
                local_a8 = local_118;
                uVar5 = CONCAT44(uVar11,DAT_141a0a0d8);
                puVar7 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_1e8,1,uVar5,&local_b8);
                uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
                uStack_1bc = *(undefined4 *)((longlong)puVar7 + 0xc);
                uStack_1c0 = *(undefined4 *)(puVar7 + 1);
                if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
                  local_1c8 = *puVar7;
                }
                else {
                  FUN_1400419b0(&local_1c8,puVar7);
                }
                local_res20 = 1;
                local_13c = 7;
                local_148[0] = 10;
                FUN_140042560(&local_1c8,local_148);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_148);
                }
                local_248 = (undefined4)local_1c8;
                uStack_244 = local_1c8._4_4_;
                uStack_240 = uStack_1c0;
                uStack_23c = uStack_1bc;
                if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_108);
                }
                FUN_140041b80(local_108,&local_248);
                local_res20 = 0;
                if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1c8);
                }
                local_a0 = local_108;
                uVar5 = CONCAT44(uVar11,DAT_141a0a0d8);
                puVar7 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar5,&local_b0);
                uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
                uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
                uStack_250 = *(undefined4 *)(puVar7 + 1);
                if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
                  local_258 = *puVar7;
                }
                else {
                  FUN_1400419b0(&local_258,puVar7);
                }
                local_res20 = 2;
                uStack_19c = 7;
                local_1a8 = 10;
                FUN_140042560(&local_258,&local_1a8);
                if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                local_248 = (undefined4)local_258;
                uStack_244 = local_258._4_4_;
                uStack_240 = uStack_250;
                uStack_23c = uStack_24c;
                if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_f8);
                }
                FUN_140041b80(local_f8,&local_248);
                local_res20 = 0;
                if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_258);
                }
                local_98 = local_f8;
                local_248 = (undefined4)local_198;
                uStack_244 = local_198._4_4_;
                uStack_240 = uStack_190;
                uStack_23c = uStack_18c;
                if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_e8);
                }
                FUN_140041b80(local_e8,&local_248);
                local_90 = local_e8;
                local_248 = (undefined4)local_208;
                uStack_244 = local_208._4_4_;
                uStack_240 = uStack_200;
                uStack_23c = uStack_1fc;
                if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_d8);
                }
                FUN_140041b80(local_d8,&local_248);
                local_88 = local_d8;
                puVar8 = (undefined4 *)
                         FUN_140e634e0(local_res8,local_res10,&local_1d8,3,
                                       CONCAT44(uVar11,DAT_1419fd6d8),&local_a8);
                if (puVar8 != local_c8) {
                  local_248 = *puVar8;
                  uStack_244 = puVar8[1];
                  uStack_240 = puVar8[2];
                  uStack_23c = puVar8[3];
                  if ((1 << ((byte)local_c8[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_c8);
                  }
                  FUN_140041b80(local_c8,&local_248);
                }
                local_80 = local_c8;
                ppuVar13 = &local_90;
                FUN_140e63610(local_res8,local_res10,&local_220,3,uVar6,ppuVar13);
              }
              else {
                local_228 = 0x5fa;
              }
            }
            else {
              local_228 = 0x5f9;
            }
          }
          cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      DAT_141a67c38 = 1;
      FUN_140e87440(&local_208,DAT_141a57c50,0x80000000,&local_1b8,uVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00);
      DAT_141a67c38 = 0;
      DAT_141a72aac = 0;
      if (local_68 != 0) {
        FUN_140e4cd60();
        local_68 = 0;
      }
    }
    else {
      local_228 = 0x5f4;
    }
    param_3 = local_res18;
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

