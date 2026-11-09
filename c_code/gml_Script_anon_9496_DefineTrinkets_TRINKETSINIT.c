// gml_Script_anon_9496_DefineTrinkets_TRINKETSINIT @ 0x1405e9bb0

undefined8 *
gml_Script_anon_9496_DefineTrinkets_TRINKETSINIT
          (code *param_1,undefined4 **param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  code *local_res8;
  undefined4 **local_res10;
  undefined8 *local_res18;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 **in_stack_fffffffffffffd80;
  ulonglong uVar9;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
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
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  code *local_1a8;
  undefined4 local_19c;
  code *local_198;
  undefined4 local_18c;
  undefined4 local_188 [3];
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined4 local_15c;
  undefined1 local_158 [16];
  undefined4 local_148 [4];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined4 local_118 [4];
  undefined4 local_108 [4];
  undefined1 local_f8 [16];
  undefined4 local_e8 [4];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_258 = 0;
  local_1e0 = "gml_Script_anon@9005@DefineTrinkets@TRINKETSINIT";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x153;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_158,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
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
  local_1d8 = 0x154;
  uStack_25c = 0xf;
  local_268 = 0x1000000000000f5;
  iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_268);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (0 < iVar2) {
    do {
      local_1d8 = 0x156;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      local_19c = 6;
      local_1a8 = local_res8;
      uVar9 = (ulonglong)in_stack_fffffffffffffd80 & 0xffffffffffffff00;
      uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar7,uVar9);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_18c = 6;
      local_198 = local_res8;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_210,uVar7,uVar9 & 0xffffffffffffff00)
      ;
      uVar8 = (undefined4)(uVar7 >> 0x20);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_278 = (undefined4)local_1b8;
      uStack_274 = local_1b8._4_4_;
      uStack_270 = uStack_1b0;
      uStack_26c = uStack_1ac;
      if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_278);
      local_b0 = local_148;
      uStack_25c = local_204;
      uStack_260 = local_208;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) == 0) {
        local_268 = local_210;
      }
      else {
        FUN_1400419b0(&local_268,&local_210);
      }
      local_258 = 1;
      local_17c = 7;
      local_188[0] = 1;
      FUN_1400460e0(&local_268,local_188);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      local_278 = (undefined4)local_268;
      uStack_274 = local_268._4_4_;
      uStack_270 = uStack_260;
      uStack_26c = uStack_25c;
      if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_278);
      local_258 = 0;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_a8 = local_138;
      uStack_bc = 0xf;
      local_c8 = 0x100000000000149;
      local_278 = 0x149;
      uStack_274 = 0x1000000;
      uStack_270 = uStack_c0;
      uStack_26c = 0xf;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_278);
      local_a0 = local_128;
      in_stack_fffffffffffffd80 = &local_b0;
      pcVar6 = (code *)CONCAT44(uVar8,DAT_141a12628);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_220,3,pcVar6,in_stack_fffffffffffffd80);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_1d8 = 0x158;
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
        uVar8 = (undefined4)((ulonglong)pcVar6 >> 0x20);
        local_230 = 0;
        local_228 = 0;
        local_224 = 5;
        puVar5 = (undefined4 *)(**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_141a1f0d0);
        if (puVar5 != local_118) {
          local_278 = *puVar5;
          uStack_274 = puVar5[1];
          uStack_270 = puVar5[2];
          uStack_26c = puVar5[3];
          if ((1 << ((byte)local_118[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_278);
        }
        local_98 = local_118;
        in_stack_fffffffffffffd80 = &local_98;
        pcVar6 = (code *)CONCAT44(uVar8,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_230,1,pcVar6,in_stack_fffffffffffffd80);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          uVar4 = (**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_141a1f0d0);
          pcVar6 = local_res8;
          in_stack_fffffffffffffd80 = local_res10;
          FUN_140e87170(uVar4,DAT_141a1f580,0x80000000,&local_1d0,local_res8,local_res10);
          local_16c = 0xf;
          local_178 = 0x1000000000000ee;
          iVar2 = FUN_140e851f0(&local_1d0,&local_178,DAT_141955260,0);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          if (iVar2 == 0) {
            local_1d8 = 0x15a;
            if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_240);
            }
            local_240 = 0;
            local_238 = 0;
            local_234 = 5;
            puVar5 = (undefined4 *)
                     (**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_1419f59b8);
            uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
            FUN_140e87440(uVar3,DAT_141a1f540,0x80000000,&local_1f8,uVar7,
                          (ulonglong)in_stack_fffffffffffffd80 & 0xffffffffffffff00);
            uVar8 = (undefined4)(uVar7 >> 0x20);
            if (puVar5 != local_108) {
              local_278 = *puVar5;
              uStack_274 = puVar5[1];
              uStack_270 = puVar5[2];
              uStack_26c = puVar5[3];
              if ((1 << ((byte)local_108[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_108);
              }
              FUN_140041b80(local_108,&local_278);
            }
            local_90 = local_108;
            local_278 = (undefined4)local_1f8;
            uStack_274 = local_1f8._4_4_;
            uStack_270 = uStack_1f0;
            uStack_26c = uStack_1ec;
            if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_278);
            local_88 = local_f8;
            in_stack_fffffffffffffd80 = &local_90;
            pcVar6 = (code *)CONCAT44(uVar8,DAT_141a573f0);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_240,2,pcVar6,
                                  in_stack_fffffffffffffd80);
            local_15c = 0;
            local_168 = &DAT_bff0000000000000;
            iVar2 = FUN_140e851f0(uVar4,&local_168,DAT_141955260,0);
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            if (iVar2 == 0) {
              local_1d8 = 0x15b;
              if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_250);
              }
              local_250 = 0;
              local_248 = 0;
              local_244 = 5;
              puVar5 = (undefined4 *)
                       (**(code **)(*(longlong *)local_res8 + 8))(local_res8,DAT_1419f59b8);
              uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
              FUN_140e87440(uVar3,DAT_141a1f540,0x80000000,&local_1f8,uVar7,
                            (ulonglong)in_stack_fffffffffffffd80 & 0xffffffffffffff00);
              uVar8 = (undefined4)(uVar7 >> 0x20);
              if (puVar5 != local_e8) {
                local_278 = *puVar5;
                uStack_274 = puVar5[1];
                uStack_270 = puVar5[2];
                uStack_26c = puVar5[3];
                if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_e8);
                }
                FUN_140041b80(local_e8,&local_278);
              }
              local_80 = local_e8;
              local_278 = (undefined4)local_1f8;
              uStack_274 = local_1f8._4_4_;
              uStack_270 = uStack_1f0;
              uStack_26c = uStack_1ec;
              if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_d8);
              }
              FUN_140041b80(local_d8,&local_278);
              local_78 = local_d8;
              in_stack_fffffffffffffd80 = &local_80;
              pcVar6 = (code *)CONCAT44(uVar8,DAT_141a57350);
              FUN_140e634e0(local_res8,local_res10,&local_250,2,pcVar6,in_stack_fffffffffffffd80);
            }
          }
        }
      }
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
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
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

