// gml_Script_anon_412_gml_Object_oBloodSplat_Create_0 @ 0x1406e6ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_412_gml_Object_oBloodSplat_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_res18 = 0;
  local_230 = "gml_Object_oBloodRain_Step_0";
  local_228 = 0;
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  uVar12 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_158,0x10,7,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  bVar8 = 0xff;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_25c = 0xffffff;
  local_268 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_228 = 1;
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_228 = 2;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar6;
    }
    else {
      uVar9 = FUN_140e4b060(puVar6);
    }
    dVar1 = (double)FUN_1412a79b0(uVar9,0x403e000000000000);
    if (dVar1 == 0.0) {
      local_228 = 4;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_1d8);
      local_278 = local_1d8;
      uStack_270 = uStack_1d0;
      uStack_26c = uStack_1cc;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_278);
      local_e8 = &local_158;
      local_278 = local_1d8;
      uStack_270 = uStack_1d0;
      uStack_26c = uStack_1cc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_278);
      local_e0 = &local_148;
      uVar4 = FUN_140e794b0(0,0x4000000000000000);
      uVar10 = CONCAT44(uVar12,DAT_141a00c98);
      puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_220,1,uVar10,&local_e0);
      uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_250 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_258 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_258,puVar7);
      }
      local_res18 = 1;
      uStack_26c = 0;
      local_278 = uVar4;
      FUN_140042560(&local_258,&local_278);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uVar4 = CONCAT44(uVar12,DAT_141a00e38);
      puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar4,&local_e8);
      uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_240 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_248 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_248,puVar7);
      }
      local_res18 = 3;
      FUN_1400460e0(&local_248,&local_258);
      local_278 = local_248;
      uStack_270 = (undefined4)uStack_240;
      uStack_26c = uStack_240._4_4_;
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      FUN_140041b80(&local_1f0,&local_278);
      local_res18 = 1;
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_res18 = 0;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_228 = 5;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_1d8);
      local_278 = local_1d8;
      uStack_270 = uStack_1d0;
      uStack_26c = uStack_1cc;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_278);
      local_e8 = &local_158;
      puVar7 = (undefined8 *)
               FUN_140e634e0(local_res8,local_res10,&local_268,1,CONCAT44(uVar12,DAT_141a00dd8),
                             &local_e8);
      if (puVar7 != &local_200) {
        local_278 = *puVar7;
        uStack_270 = *(undefined4 *)(puVar7 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        FUN_140041b80(&local_200,&local_278);
      }
      local_228 = 7;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_e8 = &local_1f0;
      local_e0 = &local_200;
      local_278 = CONCAT44(uRam00000001419e79f4,_DAT_1419e79f0);
      uStack_270 = uRam00000001419e79f8;
      uStack_26c = uRam00000001419e79fc;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_278);
      local_d8 = local_138;
      local_278 = CONCAT44(uRam00000001419e79d4,_DAT_1419e79d0);
      uStack_270 = uRam00000001419e79d8;
      uStack_26c = uRam00000001419e79dc;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_278);
      local_d0 = local_128;
      local_278 = CONCAT44(uRam00000001419e79e4,_DAT_1419e79e0);
      uStack_270 = uRam00000001419e79e8;
      uStack_26c = uRam00000001419e79ec;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_278);
      local_c8 = local_118;
      local_278 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_270 = DAT_1419df7b8;
      uStack_26c = DAT_1419df7bc;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_278);
      local_c0 = local_108;
      local_278 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_270 = DAT_1419df7b8;
      uStack_26c = DAT_1419df7bc;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_278);
      local_b8 = local_f8;
      ppuVar11 = &local_e8;
      puVar7 = (undefined8 *)gml_Script_get_blood_col(local_res8,local_res10,&local_268,7,ppuVar11);
      uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      if (puVar7 != &local_1c8) {
        local_278 = *puVar7;
        uStack_270 = *(undefined4 *)(puVar7 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_278);
      }
      local_228 = 8;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_19c = 0;
      local_1a8 = 0x3fa999999999999a;
      FUN_140e87930(&local_1c8,DAT_141a1f310,0x80000000,&local_1a8);
      local_228 = 9;
      local_278 = 0x3ff0000000000000;
      uStack_26c = 0xd;
      local_258 = 0x3ff0000000000000;
      uStack_250 = uStack_270;
      uStack_24c = 0xd;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_258);
      FUN_140e87930(&local_1c8,DAT_141a56af0,0x80000000,&local_168);
    }
    local_228 = 0x21;
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar6;
    }
    else {
      uVar9 = FUN_140e4b060(puVar6);
    }
    dVar1 = (double)FUN_1412a79b0(uVar9,0x4034000000000000);
    uVar9 = 0xffffff;
    if (dVar1 == 0.0) {
      local_228 = 0x23;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
      FUN_140e85f80(local_res8,DAT_141a00d08,0,&local_1d8);
      local_278 = local_1d8;
      uStack_270 = uStack_1d0;
      uStack_26c = uStack_1cc;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_278);
      local_e8 = &local_158;
      local_278 = local_1d8;
      uStack_270 = uStack_1d0;
      uStack_26c = uStack_1cc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_278);
      local_e0 = &local_148;
      uVar4 = FUN_140e794b0(0x9999999a,0x4000000000000000);
      uVar10 = CONCAT44(uVar12,DAT_141a00c98);
      puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_220,1,uVar10,&local_e0);
      uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_240 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_248 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_248,puVar7);
      }
      local_res18 = 0x80;
      uStack_26c = 0;
      local_278 = uVar4;
      FUN_140042560(&local_248,&local_278);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uVar4 = CONCAT44(uVar12,DAT_141a00e38);
      puVar7 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_268,1,uVar4,&local_e8);
      uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_250 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) == 0) {
        local_258 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_258,puVar7);
      }
      local_res18 = 0x180;
      FUN_1400460e0(&local_258,&local_248);
      local_278 = local_258;
      uStack_270 = uStack_250;
      uStack_26c = uStack_24c;
      if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f0);
      }
      FUN_140041b80(&local_1f0,&local_278);
      local_res18 = 0x80;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_228 = 0x24;
      uVar4 = FUN_140e794b0(0,0x4054000000000000);
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      local_204 = 0;
      local_228 = 0x25;
      uStack_24c = 0;
      local_258 = 0x4064000000000000;
      local_res18 = 0x200;
      local_210 = uVar4;
      FUN_1400462a0(&local_258,&local_210);
      local_278 = local_258;
      uStack_270 = uStack_250;
      uStack_26c = uStack_24c;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140041b80(&local_200,&local_278);
      local_res18 = 0;
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_228 = 0x26;
      uStack_24c = local_204;
      uStack_250 = local_208;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) == 0) {
        local_258 = local_210;
      }
      else {
        FUN_1400419b0(&local_258,&local_210);
      }
      local_res18 = 0x400;
      uStack_26c = 0;
      local_278 = 0x4054000000000000;
      FUN_140046500(&local_258,&local_278);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uStack_240 = uStack_240 & 0xffffffff;
      local_248 = 0x3ff0000000000000;
      local_res18 = 0xc00;
      FUN_1400462a0(&local_248,&local_258);
      local_278 = local_248;
      uStack_270 = (undefined4)uStack_240;
      uStack_26c = uStack_240._4_4_;
      FUN_140041b80(&local_a8,&local_278);
      local_res18 = 0x400;
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_228 = 0x27;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_e8 = &local_1f0;
      local_e0 = &local_200;
      local_278 = CONCAT44(uRam0000000141dd5ecc,_DAT_141dd5ec8);
      uStack_270 = uRam0000000141dd5ed0;
      uStack_26c = DAT_141dd5ed4;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_278);
      local_d8 = local_138;
      uStack_26c = 0xf;
      local_278 = 0x10000000000012d;
      local_258 = 0x10000000000012d;
      uStack_250 = uStack_270;
      uStack_24c = 0xf;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_258);
      local_d0 = local_128;
      uVar10 = CONCAT44(uVar12,DAT_141a0a7c8);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,4,uVar10,&local_e8);
      iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar4);
      uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if (0 < iVar3) {
        uStack_240 = CONCAT44(uStack_9c,uStack_a0);
        local_248 = local_a8;
        local_98 = local_a8;
        uStack_90 = uStack_240;
        do {
          local_228 = 0x29;
          uStack_26c = 0xf;
          local_278 = 0x10000010000005b;
          local_258 = 0x10000010000005b;
          uStack_250 = uStack_270;
          uStack_24c = 0xf;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_258);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_178);
          local_228 = 0x2a;
          uVar4 = FUN_140e794b0(0,0x3ff8000000000000);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1ac = 0;
          local_1b8 = uVar4;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1b8);
          local_228 = 0x2c;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_248);
          FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_188);
          local_228 = 0x2d;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_98);
          FUN_140e86fa0(local_res8,DAT_141a0f938,0x80000000,&local_198);
          cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
          uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_88,&local_res8,&local_res10);
      if (local_78 != 0) {
        FUN_140e4cd60();
        local_78 = 0;
      }
      uVar9 = uStack_9c;
    }
    bVar8 = (byte)uVar9;
    local_228 = 0x33;
    puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    FUN_140e609c0(local_res8);
    FUN_1400460e0(puVar7,uVar5);
    FUN_140e60910(1);
    local_228 = 0x34;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if (puVar6 != &local_158) {
      local_98 = *puVar6;
      uStack_90 = puVar6[1];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_98);
    }
    local_e8 = &local_158;
    FUN_140e609c0(local_res8);
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_268,1,CONCAT44(uVar12,DAT_141a08838),
                           &local_e8);
    if (puVar6 != puVar7) {
      local_98 = *puVar6;
      uStack_90 = puVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_98);
    }
    FUN_140e60910(1);
  }
  else {
    local_228 = 1;
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << (bVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return;
}

