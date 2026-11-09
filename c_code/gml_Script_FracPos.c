// gml_Script_FracPos @ 0x140283fa0

undefined8 * gml_Script_FracPos(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong *local_res8;
  longlong *local_res10;
  code *pcVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 **in_stack_fffffffffffffdb0;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  undefined4 local_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
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
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
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
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_220 = "gml_Script_find_target";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 2;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  bVar6 = 0xff;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_204 = 0xffffff;
  local_210 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_22c = 0;
  local_238 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 3;
  FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_118);
  local_138 = local_118;
  uStack_130 = uStack_110;
  uStack_12c = uStack_10c;
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  FUN_140041b80(&local_210,&local_138);
  uVar9 = 0;
  bVar8 = 0;
  uStack_1ec = 0;
  local_1f8 = 0xc010000000000000;
  local_218 = 5;
  local_1dc = 0xf;
  local_1e8 = (longlong *)0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_1e8);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar2) {
    do {
      local_218 = 7;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      local_1dc = 6;
      local_1e8 = local_res8;
      uVar13 = (ulonglong)in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
      uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_148,uVar11,uVar13);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_fc = 6;
      local_108 = local_res8;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_158,uVar11,uVar13);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_ec = 6;
      local_f8 = local_res10;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_168,uVar11,uVar13);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_dc = 6;
      local_e8 = local_res10;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_178,uVar11,uVar13 & 0xffffffffffffff00
                   );
      uVar12 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_248 = (undefined4)local_148;
      uStack_244 = local_148._4_4_;
      uStack_240 = uStack_140;
      uStack_23c = uStack_13c;
      if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_248);
      local_78 = local_1d8;
      local_248 = (undefined4)local_158;
      uStack_244 = local_158._4_4_;
      uStack_240 = uStack_150;
      uStack_23c = uStack_14c;
      if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_248);
      local_70 = local_1c8;
      local_248 = (undefined4)local_168;
      uStack_244 = local_168._4_4_;
      uStack_240 = uStack_160;
      uStack_23c = uStack_15c;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_248);
      local_68 = local_1b8;
      local_248 = (undefined4)local_178;
      uStack_244 = local_178._4_4_;
      uStack_240 = uStack_170;
      uStack_23c = uStack_16c;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_248);
      local_60 = local_1a8;
      ppuVar14 = &local_78;
      uVar11 = CONCAT44(uVar12,DAT_1419fd548);
      puVar3 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_238,4,uVar11,ppuVar14);
      if (puVar3 != &local_188) {
        local_248 = *(undefined4 *)puVar3;
        uStack_244 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_240 = *(undefined4 *)(puVar3 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_248);
        uVar7 = uStack_17c;
      }
      bVar6 = (byte)uVar7;
      local_218 = 9;
      local_cc = 6;
      local_d8 = local_res8;
      uVar13 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_d8,DAT_141a0a828,0x80000000,&local_198,uVar11,uVar13);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_bc = 6;
      local_c8 = local_res10;
      in_stack_fffffffffffffdb0 = (undefined1 **)(uVar13 & 0xffffffffffffff00);
      pcVar10 = (code *)(uVar11 & 0xffffffffffffff00);
      FUN_140e87440(&local_c8,DAT_141a0a828,0x80000000,&local_128,pcVar10,in_stack_fffffffffffffdb0)
      ;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      iVar2 = FUN_140e851f0(&local_198,&local_128,DAT_141955260,0);
      if (iVar2 == 0) {
        local_218 = 9;
      }
      else {
        local_218 = 10;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
        uVar5 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a56cd0);
        iVar2 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,0);
        if (iVar2 == 0) {
          local_218 = 10;
        }
        else {
          local_218 = 0xb;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          local_ac = 6;
          local_b8 = local_res8;
          uVar13 = (ulonglong)in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
          uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_148,uVar11,uVar13);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          local_9c = 6;
          local_a8 = local_res8;
          uVar13 = uVar13 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_158,uVar11,uVar13);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          local_8c = 6;
          local_98 = local_res10;
          uVar13 = uVar13 & 0xffffffffffffff00;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_168,uVar11,uVar13);
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          local_7c = 6;
          local_88 = local_res10;
          uVar11 = uVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_178,uVar11,
                        uVar13 & 0xffffffffffffff00);
          uVar12 = (undefined4)(uVar11 >> 0x20);
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          local_248 = (undefined4)local_148;
          uStack_244 = local_148._4_4_;
          uStack_240 = uStack_140;
          uStack_23c = uStack_13c;
          if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_248);
          local_78 = local_1d8;
          local_248 = (undefined4)local_158;
          uStack_244 = local_158._4_4_;
          uStack_240 = uStack_150;
          uStack_23c = uStack_14c;
          if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1c8);
          }
          FUN_140041b80(local_1c8,&local_248);
          local_70 = local_1c8;
          local_248 = (undefined4)local_168;
          uStack_244 = local_168._4_4_;
          uStack_240 = uStack_160;
          uStack_23c = uStack_15c;
          if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_248);
          local_68 = local_1b8;
          local_248 = (undefined4)local_178;
          uStack_244 = local_178._4_4_;
          uStack_240 = uStack_170;
          uStack_23c = uStack_16c;
          if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_248);
          local_60 = local_1a8;
          in_stack_fffffffffffffdb0 = &local_78;
          pcVar10 = (code *)CONCAT44(uVar12,DAT_1419fd548);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_238,4,pcVar10,
                                in_stack_fffffffffffffdb0);
          iVar2 = FUN_140e851f0(uVar4,&local_210,DAT_141955260,1);
          if (iVar2 < 1) {
            local_218 = 0xe;
            local_248 = (undefined4)local_188;
            uStack_244 = local_188._4_4_;
            uStack_240 = uStack_180;
            uStack_23c = uStack_17c;
            if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_210);
            }
            FUN_140041b80(&local_210,&local_248);
            local_218 = 0xf;
            uStack_12c = 6;
            local_138 = local_res8;
            in_stack_fffffffffffffdb0 =
                 (undefined1 **)((ulonglong)in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
            pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
            FUN_140e87440(&local_138,DAT_141a0a828,0x80000000,&local_198,pcVar10,
                          in_stack_fffffffffffffdb0);
            if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_248 = (undefined4)local_198;
            uStack_244 = local_198._4_4_;
            uStack_240 = uStack_190;
            uStack_23c = uStack_18c;
            if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            FUN_140041b80(&local_1f8,&local_248);
            uVar9 = uStack_1ec;
          }
          else {
            local_218 = 0xb;
          }
        }
      }
      bVar8 = (byte)uVar9;
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_218 = 0x14;
  if (&local_1f8 != param_3) {
    local_248 = (undefined4)local_1f8;
    uStack_244 = local_1f8._4_4_;
    uStack_240 = uStack_1f0;
    uStack_23c = uStack_1ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_248);
  }
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

