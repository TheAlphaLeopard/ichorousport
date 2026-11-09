// gml_Script_anon_14350_gml_Object_oRogueLevelManager_Other_12 @ 0x140d11d00

undefined8 *
gml_Script_anon_14350_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 **in_stack_fffffffffffffd50;
  ulonglong uVar11;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  longlong *local_258;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  longlong *local_1c0;
  undefined4 local_1b4;
  longlong *local_1b0;
  undefined4 local_1a4;
  longlong *local_1a0;
  undefined4 local_194;
  longlong *local_190;
  undefined4 local_184;
  longlong *local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined1 local_158 [16];
  undefined4 local_148 [4];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8 [4];
  undefined4 local_d8 [8];
  undefined4 local_b8 [4];
  undefined1 *local_a8;
  undefined4 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_1d0 = "gml_Script_anon@13609@gml_Object_oRogueLevelManager_Other_12";
  local_1d8 = DAT_141dc7a50;
  local_1c8 = 0x1e2;
  pcVar7 = FUN_140041b30;
  DAT_141dc7a50 = &local_1d8;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_158,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_28c = 0xffffff;
  local_298 = 0;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa7c8);
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  uStack_20c = 0xffffff;
  local_218 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  uStack_22c = 0xffffff;
  local_238 = 0;
  local_164 = 0;
  local_170 = 0;
  local_25c = 0;
  local_268 = 0;
  local_26c = 0;
  local_278 = 0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x1e3;
  puVar4 = (undefined8 *)FUN_140e8da20(&local_170,local_res8,0);
  if (puVar4 != &local_298) {
    local_248 = *(undefined4 *)puVar4;
    uStack_244 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_240 = *(undefined4 *)(puVar4 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_248);
  }
  local_1c8 = 0x1e4;
  local_24c = 0xf;
  local_258 = (longlong *)0x1000000000000d8;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_258);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (0 < iVar2) {
    do {
      local_1c8 = 0x1e5;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
      local_24c = 6;
      local_258 = local_res8;
      uVar11 = (ulonglong)in_stack_fffffffffffffd50 & 0xffffffffffffff00;
      uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_1e8,uVar8,uVar11);
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_1b4 = 6;
      local_1c0 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c0,DAT_1419fe158,0x80000000,&local_1f8,uVar8,uVar11);
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      local_1a4 = 6;
      local_1b0 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_1b0,DAT_1419fde18,0x80000000,&local_208,uVar8,uVar11);
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_194 = 6;
      local_1a0 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_1a0,DAT_1419fec88,0x80000000,&local_218,uVar8,uVar11);
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      local_184 = 6;
      local_190 = local_res8;
      uVar11 = uVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_190,DAT_141a1f580,0x80000000,&local_228,uVar8,uVar11);
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      local_174 = 6;
      local_180 = local_res8;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_180,DAT_141a1b910,0x80000000,&local_238,uVar8,uVar11 & 0xffffffffffffff00
                   );
      uVar10 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      local_2a8 = (undefined4)local_238;
      uStack_2a4 = local_238._4_4_;
      uStack_2a0 = uStack_230;
      uStack_29c = uStack_22c;
      if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_2a8);
      local_a8 = local_158;
      FUN_140e609c0(DAT_141a729d8);
      FUN_140e645a0(&local_248,gml_Script_anon_13848_gml_Object_oRogueLevelManager_Other_12,0);
      if (&local_248 != puVar3) {
        local_2a8 = local_248;
        uStack_2a4 = uStack_244;
        uStack_2a0 = uStack_240;
        uStack_29c = uStack_23c;
        if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_2a8);
      }
      FUN_140e60910(1);
      if (puVar3 != local_148) {
        local_2a8 = *puVar3;
        uStack_2a4 = puVar3[1];
        uStack_2a0 = puVar3[2];
        uStack_29c = puVar3[3];
        if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_2a8);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_a0 = local_148;
      local_2a8 = (undefined4)local_1e8;
      uStack_2a4 = local_1e8._4_4_;
      uStack_2a0 = uStack_1e0;
      uStack_29c = uStack_1dc;
      if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_2a8);
      local_98 = local_138;
      local_2a8 = (undefined4)local_1f8;
      uStack_2a4 = local_1f8._4_4_;
      uStack_2a0 = uStack_1f0;
      uStack_29c = uStack_1ec;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_2a8);
      local_90 = local_128;
      local_2a8 = (undefined4)local_208;
      uStack_2a4 = local_208._4_4_;
      uStack_2a0 = uStack_200;
      uStack_29c = uStack_1fc;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_2a8);
      local_88 = local_118;
      local_2a8 = (undefined4)local_218;
      uStack_2a4 = local_218._4_4_;
      uStack_2a0 = uStack_210;
      uStack_29c = uStack_20c;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_2a8);
      local_80 = local_108;
      local_2a8 = (undefined4)local_228;
      uStack_2a4 = local_228._4_4_;
      uStack_2a0 = uStack_220;
      uStack_29c = uStack_21c;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_2a8);
      local_78 = local_f8;
      uVar9 = CONCAT44(uVar10,DAT_1419fa688);
      puVar6 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar9,&local_a8);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (puVar6 != local_e8) {
        local_2a8 = *puVar6;
        uStack_2a4 = puVar6[1];
        uStack_2a0 = puVar6[2];
        uStack_29c = puVar6[3];
        if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_2a8);
      }
      local_70 = local_e8;
      if (puVar5 != local_d8) {
        local_2a8 = *puVar5;
        uStack_2a4 = puVar5[1];
        uStack_2a0 = puVar5[2];
        uStack_29c = puVar5[3];
        if ((1 << ((byte)local_d8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_2a8);
      }
      local_68 = local_d8;
      local_60 = &local_298;
      uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
      puVar5 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_278,8,uVar9,&local_a0);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      if (puVar5 != local_b8) {
        local_2a8 = *puVar5;
        uStack_2a4 = puVar5[1];
        uStack_2a0 = puVar5[2];
        uStack_29c = puVar5[3];
        if ((1 << ((byte)local_b8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_2a8);
      }
      local_58 = local_b8;
      in_stack_fffffffffffffd50 = &local_60;
      pcVar7 = (code *)CONCAT44(uVar10,DAT_1419fe568);
      FUN_140e634e0(local_res8,local_res10,&local_268,2,pcVar7,in_stack_fffffffffffffd50);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  local_1c8 = 0x1e8;
  if (&local_298 != param_3) {
    local_2a8 = (undefined4)local_298;
    uStack_2a4 = local_298._4_4_;
    uStack_2a0 = uStack_290;
    uStack_29c = uStack_28c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_2a8);
  }
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

