// gml_Script____struct___155_anon_40245_DefineDebuffs_OFFERINGSINIT @ 0x140400080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___155_anon_40245_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffdb0;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  undefined4 local_20c;
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
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_1f0 = "gml_Script_anon@40245@DefineDebuffs@OFFERINGSINIT";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x684;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_18c = 0xffffff;
  local_198 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5ee8);
  local_1a4 = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x686;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_21c = 0;
  local_228 = 0.0;
  local_1e8 = 0x687;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_20c = 0;
  local_218 = 0xc010000000000000;
  local_1e8 = 0x689;
  uStack_22c = 0xf;
  local_238 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (0 < iVar2) {
    do {
      local_1e8 = 0x68b;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      uStack_22c = 10;
      local_238 = 0;
      iVar2 = FUN_140e851f0(uVar7,&local_238,DAT_141955260,0);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if (iVar2 == 0) {
        local_1e8 = 0x68c;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
        local_14c = 0;
        local_158 = 0;
        iVar2 = FUN_140e851f0(uVar7,&local_158,DAT_141955260,1);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if (iVar2 == -2 || 0 < iVar2) {
          local_1e8 = 0x68d;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
          local_13c = 10;
          local_148 = 0;
          iVar2 = FUN_140e851f0(uVar7,&local_148,DAT_141955260,0);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          if (iVar2 == 0) {
            local_1e8 = 0x68d;
          }
          else {
            local_1e8 = 0x68f;
            uVar3 = local_21c & 0xffffff;
            if (uVar3 == 0) {
LAB_140400423:
              local_228 = local_228 + 1.0;
            }
            else {
              if (uVar3 == 1) {
                local_228 = (double)FUN_140e4b060(&local_228);
                local_21c = 0;
                goto LAB_140400423;
              }
              if (uVar3 == 7) {
                local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
              }
              else if (uVar3 == 10) {
                local_228 = (double)((longlong)local_228 + 1);
              }
              else {
                if (uVar3 == 0xd) {
                  local_21c = 0;
                  goto LAB_140400423;
                }
                FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
              }
            }
            local_1e8 = 0x690;
            uStack_23c = 6;
            local_248 = local_res8;
            in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
            pcVar9 = (code *)((ulonglong)pcVar9 & 0xffffffffffffff00);
            FUN_140e87440(&local_248,DAT_141a0a828,0x80000000,&local_168,pcVar9,
                          in_stack_fffffffffffffdb0);
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_208 = (undefined4)local_168;
            uStack_204 = local_168._4_4_;
            uStack_200 = uStack_160;
            uStack_1fc = uStack_15c;
            if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_218);
            }
            FUN_140041b80(&local_218,&local_208);
          }
        }
        else {
          local_1e8 = 0x68c;
        }
      }
      else {
        local_1e8 = 0x68b;
      }
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_1e8 = 0x693;
  uStack_23c = 0;
  local_248 = (longlong *)0x3ff0000000000000;
  iVar2 = FUN_140e851f0(&local_228,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar2 != 0) {
    local_1e8 = 0x693;
    goto LAB_140400b72;
  }
  local_1e8 = 0x694;
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a57c50,0x80000000,&local_178,uVar10,in_stack_fffffffffffffdb0);
  uStack_23c = 10;
  local_248 = (longlong *)0x2;
  iVar2 = FUN_140e851f0(&local_178,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar2 != 0) {
    local_1e8 = 0x694;
    goto LAB_140400b72;
  }
  local_1e8 = 0x696;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 5;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 5;
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 5;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 5;
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a1edd0,0x80000000,&local_188,uVar10,in_stack_fffffffffffffdb0);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5c08,0x80000000,&local_198,uVar10,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar10 >> 0x20);
  local_208 = _DAT_141dc6550;
  uStack_204 = uRam0000000141dc6554;
  uStack_200 = uRam0000000141dc6558;
  uStack_1fc = uRam0000000141dc655c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_208);
  local_b8 = local_138;
  local_208 = _DAT_141dc6550;
  uStack_204 = uRam0000000141dc6554;
  uStack_200 = uRam0000000141dc6558;
  uStack_1fc = uRam0000000141dc655c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_208);
  local_b0 = local_128;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_248,FUN_1403ffec0,0);
  if (&local_248 != puVar6) {
    local_208 = (undefined4)local_248;
    uStack_204 = local_248._4_4_;
    uStack_200 = uStack_240;
    uStack_1fc = uStack_23c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_208);
  }
  FUN_140e60910(1);
  if (puVar6 != &local_118) {
    local_208 = *(undefined4 *)puVar6;
    uStack_204 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_200 = *(undefined4 *)(puVar6 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_208);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_a8 = &local_118;
  uVar5 = CONCAT44(uVar4,DAT_141a0a0d8);
  puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1d0,1,uVar5,&local_b8);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_230 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_238,puVar6);
  }
  local_res18 = 1;
  uStack_23c = 7;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,10);
  FUN_140042560(&local_238,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_208 = (undefined4)local_238;
  uStack_204 = local_238._4_4_;
  uStack_200 = uStack_230;
  uStack_1fc = uStack_22c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_208);
  local_res18 = 0;
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_a0 = local_108;
  uVar5 = CONCAT44(uVar4,DAT_141a0a0d8);
  puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1e0,1,uVar5,&local_b0);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_230 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
    local_238 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_238,puVar6);
  }
  local_res18 = 2;
  uStack_23c = 7;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,10);
  FUN_140042560(&local_238,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_208 = (undefined4)local_238;
  uStack_204 = local_238._4_4_;
  uStack_200 = uStack_230;
  uStack_1fc = uStack_22c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_208);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_98 = local_f8;
  local_208 = (undefined4)local_198;
  uStack_204 = local_198._4_4_;
  uStack_200 = uStack_190;
  uStack_1fc = uStack_18c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_208);
  local_90 = local_e8;
  local_88 = &local_218;
  puVar8 = (undefined4 *)
           FUN_140e634e0(local_res8,local_res10,&local_1c0,3,CONCAT44(uVar4,DAT_1419fd6d8),&local_a8
                        );
  if (puVar8 != local_c8) {
    local_208 = *puVar8;
    uStack_204 = puVar8[1];
    uStack_200 = puVar8[2];
    uStack_1fc = puVar8[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_208);
  }
  local_80 = local_c8;
  switch(local_20c) {
  default:
switchD_140400b0d_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_218;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_218 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140400b0d_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_218);
    uVar5 = FUN_140e87250(uVar4);
  }
  FUN_140e63610(uVar5,local_res10,&local_1b0,3,&local_188,&local_90);
LAB_140400b72:
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

