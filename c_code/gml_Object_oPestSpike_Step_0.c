// gml_Object_oPestSpike_Step_0 @ 0x140bde0f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oPestSpike_Step_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined4 local_23c;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
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
  undefined4 local_19c;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined8 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  uint local_b0 [2];
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  
  local_200 = "gml_Script_anon@224@gml_Object_oPestSpike_Create_0";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_b0,param_4,1,param_5);
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_288,0x10,7,FUN_1400424d0,FUN_140041b30);
  bVar6 = 0xff;
  uStack_20c = 0xffffff;
  local_218 = (undefined1 *)0x0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  local_28c = 0;
  local_298 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x10;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_b0[0];
  if ((int)local_b0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a8;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_1f8 = 0x10;
    if ((int)local_b0[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_a8;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0xc010000000000000;
  }
  local_1f8 = 0x12;
  if ((int)local_b0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_a8;
  }
  local_19c = 0;
  local_1a8 = 0xc010000000000000;
  iVar2 = FUN_140e851f0(puVar5,&local_1a8,DAT_141955260,0);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar2 == 0) {
    local_1f8 = 0x14;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
  }
  else {
    uStack_20c = 0;
    local_218 = &DAT_bff0000000000000;
    local_1f8 = 0x1a;
    if (0 < (int)local_b0[0]) {
      puVar8 = (undefined8 *)*local_a8;
    }
    iVar2 = FUN_140e63cb0(local_a0,&local_res8,&local_res10,puVar8);
    if (0 < iVar2) {
      do {
        local_1f8 = 0x1c;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_298 = 0;
        local_290 = 0;
        local_28c = 5;
        local_19c = 6;
        local_1a8 = local_res8;
        uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_1a8,DAT_141a0a808,0x80000000,&local_1b8,uVar10,0);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_154 = 6;
        local_160 = local_res8;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_160,DAT_141a0a788,0x80000000,&local_1c8,uVar10,0);
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        local_144 = 6;
        local_150 = local_res8;
        FUN_140e87440(&local_150,DAT_141a101f8,0x80000000,&local_1d8,uVar10 & 0xffffffffffffff00,0);
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        local_2a8 = (undefined4)local_1b8;
        uStack_2a4 = local_1b8._4_4_;
        uStack_2a0 = uStack_1b0;
        uStack_29c = uStack_1ac;
        if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_288);
        }
        FUN_140041b80(local_288,&local_2a8);
        local_198 = local_288;
        local_2a8 = (undefined4)local_1c8;
        uStack_2a4 = local_1c8._4_4_;
        uStack_2a0 = uStack_1c0;
        uStack_29c = uStack_1bc;
        if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_2a8);
        local_190 = local_278;
        local_2a8 = (undefined4)local_1b8;
        uStack_2a4 = local_1b8._4_4_;
        uStack_2a0 = uStack_1b0;
        uStack_29c = uStack_1ac;
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_2a8);
        local_188 = local_268;
        local_2a8 = (undefined4)local_1d8;
        uStack_2a4 = local_1d8._4_4_;
        uStack_2a0 = uStack_1d0;
        uStack_29c = uStack_1cc;
        if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2a8);
        uVar4 = local_res10;
        local_180 = local_258;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_23c = 6;
        local_248 = uVar4;
        uVar3 = FUN_140e5c910();
        FUN_140e42c10(uVar3,uVar4);
        local_178 = &local_248;
        local_2a8 = _DAT_1419ec9d0;
        uStack_2a4 = uRam00000001419ec9d4;
        uStack_2a0 = uRam00000001419ec9d8;
        uStack_29c = uRam00000001419ec9dc;
        if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2a8);
        local_170 = local_238;
        local_2a8 = _DAT_1419df7c0;
        uStack_2a4 = uRam00000001419df7c4;
        uStack_2a0 = uRam00000001419df7c8;
        uStack_29c = uRam00000001419df7cc;
        if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2a8);
        local_168 = local_228;
        pcVar9 = (code *)&local_198;
        uVar4 = gml_GlobalScript_collisionReal(local_res8,local_res10,&local_298,7,pcVar9);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 == '\0') {
          local_1f8 = 0x22;
          if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          local_298 = 0;
          local_290 = 0;
          local_28c = 5;
          local_134 = 6;
          local_140 = local_res8;
          uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_140,DAT_141a0a798,0x80000000,&local_1e8,uVar10,0);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          local_124 = 6;
          local_130 = local_res8;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_130,DAT_141a0a788,0x80000000,&local_1c8,uVar10,0);
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          local_114 = 6;
          local_120 = local_res8;
          FUN_140e87440(&local_120,DAT_141a101f8,0x80000000,&local_1d8,uVar10 & 0xffffffffffffff00,0
                       );
          if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_120);
          }
          local_2a8 = (undefined4)local_1e8;
          uStack_2a4 = local_1e8._4_4_;
          uStack_2a0 = uStack_1e0;
          uStack_29c = uStack_1dc;
          if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_288);
          }
          FUN_140041b80(local_288,&local_2a8);
          local_198 = local_288;
          local_2a8 = (undefined4)local_1c8;
          uStack_2a4 = local_1c8._4_4_;
          uStack_2a0 = uStack_1c0;
          uStack_29c = uStack_1bc;
          if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_2a8);
          local_190 = local_278;
          local_2a8 = (undefined4)local_1e8;
          uStack_2a4 = local_1e8._4_4_;
          uStack_2a0 = uStack_1e0;
          uStack_29c = uStack_1dc;
          if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_2a8);
          local_188 = local_268;
          local_2a8 = (undefined4)local_1d8;
          uStack_2a4 = local_1d8._4_4_;
          uStack_2a0 = uStack_1d0;
          uStack_29c = uStack_1cc;
          if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_2a8);
          uVar4 = local_res10;
          local_180 = local_258;
          if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_23c = 6;
          local_248 = uVar4;
          uVar3 = FUN_140e5c910();
          FUN_140e42c10(uVar3,uVar4);
          local_178 = &local_248;
          local_2a8 = _DAT_1419ec9d0;
          uStack_2a4 = uRam00000001419ec9d4;
          uStack_2a0 = uRam00000001419ec9d8;
          uStack_29c = uRam00000001419ec9dc;
          if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2a8);
          local_170 = local_238;
          local_2a8 = _DAT_1419df7c0;
          uStack_2a4 = uRam00000001419df7c4;
          uStack_2a0 = uRam00000001419df7c8;
          uStack_29c = uRam00000001419df7cc;
          if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2a8);
          local_168 = local_228;
          pcVar9 = (code *)&local_198;
          uVar4 = gml_GlobalScript_collisionReal(local_res8,local_res10,&local_298,7,pcVar9);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_1f8 = 0x25;
            local_218 = (undefined1 *)0x4066800000000000;
            goto LAB_140bdf05b;
          }
          local_1f8 = 0x28;
          if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          local_298 = 0;
          local_290 = 0;
          local_28c = 5;
          local_104 = 6;
          local_110 = local_res8;
          uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_110,DAT_141a0a808,0x80000000,&local_1b8,uVar10,0);
          if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          local_f4 = 6;
          local_100 = local_res8;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_100,DAT_141a0a788,0x80000000,&local_1c8,uVar10,0);
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          local_e4 = 6;
          local_f0 = local_res8;
          FUN_140e87440(&local_f0,DAT_141a0a798,0x80000000,&local_1e8,uVar10 & 0xffffffffffffff00,0)
          ;
          if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f0);
          }
          local_2a8 = (undefined4)local_1b8;
          uStack_2a4 = local_1b8._4_4_;
          uStack_2a0 = uStack_1b0;
          uStack_29c = uStack_1ac;
          if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_288);
          }
          FUN_140041b80(local_288,&local_2a8);
          local_198 = local_288;
          local_2a8 = (undefined4)local_1c8;
          uStack_2a4 = local_1c8._4_4_;
          uStack_2a0 = uStack_1c0;
          uStack_29c = uStack_1bc;
          if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_2a8);
          local_190 = local_278;
          local_2a8 = (undefined4)local_1e8;
          uStack_2a4 = local_1e8._4_4_;
          uStack_2a0 = uStack_1e0;
          uStack_29c = uStack_1dc;
          if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_2a8);
          local_188 = local_268;
          local_2a8 = (undefined4)local_1c8;
          uStack_2a4 = local_1c8._4_4_;
          uStack_2a0 = uStack_1c0;
          uStack_29c = uStack_1bc;
          if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_2a8);
          uVar4 = local_res10;
          local_180 = local_258;
          if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_23c = 6;
          local_248 = uVar4;
          uVar3 = FUN_140e5c910();
          FUN_140e42c10(uVar3,uVar4);
          local_178 = &local_248;
          local_2a8 = _DAT_1419ec9d0;
          uStack_2a4 = uRam00000001419ec9d4;
          uStack_2a0 = uRam00000001419ec9d8;
          uStack_29c = uRam00000001419ec9dc;
          if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2a8);
          local_170 = local_238;
          local_2a8 = _DAT_1419df7c0;
          uStack_2a4 = uRam00000001419df7c4;
          uStack_2a0 = uRam00000001419df7c8;
          uStack_29c = uRam00000001419df7cc;
          if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2a8);
          local_168 = local_228;
          pcVar9 = (code *)&local_198;
          uVar4 = gml_GlobalScript_collisionReal(local_res8,local_res10,&local_298,7,pcVar9);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_1f8 = 0x2b;
            local_218 = (undefined1 *)0x4070e00000000000;
            goto LAB_140bdf05b;
          }
          local_1f8 = 0x2e;
          if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          local_298 = 0;
          local_290 = 0;
          local_28c = 5;
          local_d4 = 6;
          local_e0 = local_res8;
          uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_e0,DAT_141a0a808,0x80000000,&local_1b8,uVar10,0);
          if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e0);
          }
          local_c4 = 6;
          local_d0 = local_res8;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_d0,DAT_141a101f8,0x80000000,&local_1d8,uVar10,0);
          if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d0);
          }
          local_b4 = 6;
          local_c0 = local_res8;
          FUN_140e87440(&local_c0,DAT_141a0a798,0x80000000,&local_1e8,uVar10 & 0xffffffffffffff00,0)
          ;
          if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          local_2a8 = (undefined4)local_1b8;
          uStack_2a4 = local_1b8._4_4_;
          uStack_2a0 = uStack_1b0;
          uStack_29c = uStack_1ac;
          if ((1 << (local_288[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_288);
          }
          FUN_140041b80(local_288,&local_2a8);
          local_198 = local_288;
          local_2a8 = (undefined4)local_1d8;
          uStack_2a4 = local_1d8._4_4_;
          uStack_2a0 = uStack_1d0;
          uStack_29c = uStack_1cc;
          if ((1 << (local_278[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_2a8);
          local_190 = local_278;
          local_2a8 = (undefined4)local_1e8;
          uStack_2a4 = local_1e8._4_4_;
          uStack_2a0 = uStack_1e0;
          uStack_29c = uStack_1dc;
          if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_268);
          }
          FUN_140041b80(local_268,&local_2a8);
          local_188 = local_268;
          local_2a8 = (undefined4)local_1d8;
          uStack_2a4 = local_1d8._4_4_;
          uStack_2a0 = uStack_1d0;
          uStack_29c = uStack_1cc;
          if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_2a8);
          uVar4 = local_res10;
          local_180 = local_258;
          if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_23c = 6;
          local_248 = uVar4;
          uVar3 = FUN_140e5c910();
          FUN_140e42c10(uVar3,uVar4);
          local_178 = &local_248;
          local_2a8 = _DAT_1419ec9d0;
          uStack_2a4 = uRam00000001419ec9d4;
          uStack_2a0 = uRam00000001419ec9d8;
          uStack_29c = uRam00000001419ec9dc;
          if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2a8);
          local_170 = local_238;
          local_2a8 = _DAT_1419df7c0;
          uStack_2a4 = uRam00000001419df7c4;
          uStack_2a0 = uRam00000001419df7c8;
          uStack_29c = uRam00000001419df7cc;
          if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2a8);
          local_168 = local_228;
          pcVar9 = (code *)&local_198;
          uVar4 = gml_GlobalScript_collisionReal(local_res8,local_res10,&local_298,7,pcVar9);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_1f8 = 0x31;
            local_218 = (undefined1 *)0x4056800000000000;
            goto LAB_140bdf05b;
          }
        }
        else {
          local_1f8 = 0x1f;
          local_218 = (undefined1 *)0x0;
LAB_140bdf05b:
          uStack_20c = 0;
        }
        cVar1 = FUN_140e643f0(local_a0,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    bVar6 = 0;
    FUN_140e63970(local_a0,&local_res8,&local_res10);
    local_1f8 = 0x37;
    if (&local_218 != param_3) {
      local_2a8 = (undefined4)local_218;
      uStack_2a4 = local_218._4_4_;
      uStack_2a0 = uStack_210;
      uStack_29c = uStack_20c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_2a8);
    }
    if (local_90 != 0) {
      FUN_140e4cd60();
      local_90 = 0;
    }
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  _eh_vector_destructor_iterator_(local_288,0x10,7,FUN_140041b30);
  if (0 < (int)local_b0[0]) {
    puVar8 = local_a8;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_a8);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

