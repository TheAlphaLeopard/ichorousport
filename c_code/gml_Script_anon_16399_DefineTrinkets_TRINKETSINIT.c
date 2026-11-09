// gml_Script_anon_16399_DefineTrinkets_TRINKETSINIT @ 0x1405f30f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_16399_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  double dVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  double local_248;
  uint local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [48];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  
  bVar2 = false;
  bVar1 = false;
  uVar13 = 0;
  local_230 = "gml_Script_anon@15836@DefineTrinkets@TRINKETSINIT";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x27e;
  pcVar10 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_198,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  uStack_20c = 0xffffff;
  local_218 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x280;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  ppuVar11 = (undefined1 **)((ulonglong)pcVar10 & 0xffffffffffffff00);
  FUN_140e87440(uVar5,DAT_1419ffba8,0x80000000,&local_248,ppuVar11,0,uVar13);
  dVar9 = local_248;
  if ((local_23c & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_248);
  }
  uVar8 = (ulonglong)dVar9;
  if (0 < (int)uVar8) {
    do {
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      local_228 = 0x281;
      local_1ec = 0xf;
      local_1f8 = 0x1000000000000ee;
      iVar4 = FUN_140e63cb0(local_e0,&local_res8,&local_res10,&local_1f8);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if (0 < iVar4) {
        do {
          local_228 = 0x283;
          uVar5 = FUN_140e794b0(0,0);
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_24c = 0;
          local_228 = 0x284;
          local_258 = uVar5;
          uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
          local_1dc = 0;
          local_1e8 = 0x3ff0000000000000;
          iVar4 = FUN_140e851f0(uVar5,&local_1e8,DAT_141955260,0);
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          if (iVar4 == 0) {
            uStack_1bc = 0;
            local_1c8 = 0;
            bVar2 = true;
            puVar6 = &local_1c8;
          }
          else {
            local_1cc = 0;
            local_1d8 = 0x4066800000000000;
            bVar1 = true;
            puVar6 = &local_1d8;
          }
          local_298 = *(undefined4 *)puVar6;
          uStack_294 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_290 = *(undefined4 *)(puVar6 + 1);
          uStack_28c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_298);
          if ((bVar1) && (bVar1 = false, (1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_1d8);
          }
          if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_1c8);
          }
          local_228 = 0x285;
          uVar13 = FUN_140e794b0(0,0);
          FUN_140162c50(&local_268,uVar13);
          local_228 = 0x287;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          local_1ac = 6;
          local_1b8 = local_res8;
          uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_208,uVar12,0);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_19c = 6;
          local_1a8 = local_res8;
          FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_218,uVar12 & 0xffffffffffffff00,0
                       );
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_298 = (undefined4)local_208;
          uStack_294 = local_208._4_4_;
          uStack_290 = uStack_200;
          uStack_28c = uStack_1fc;
          if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_298);
          local_118 = local_198;
          local_298 = (undefined4)local_218;
          uStack_294 = local_218._4_4_;
          uStack_290 = uStack_210;
          uStack_28c = uStack_20c;
          if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_298);
          local_110 = local_188;
          uStack_11c = 0xf;
          local_128 = 0x100000000000110;
          local_298 = 0x110;
          uStack_294 = 0x1000000;
          uStack_290 = uStack_120;
          uStack_28c = 0xf;
          if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_298);
          local_108 = local_178;
          local_100 = &local_268;
          local_f8 = &local_258;
          local_298 = _DAT_1419e6ac0;
          uStack_294 = uRam00000001419e6ac4;
          uStack_290 = uRam00000001419e6ac8;
          uStack_28c = uRam00000001419e6acc;
          if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_298);
          local_f0 = local_148;
          local_298 = _DAT_141dd4b68;
          uStack_294 = uRam0000000141dd4b6c;
          uStack_290 = uRam0000000141dd4b70;
          uStack_28c = DAT_141dd4b74;
          if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_298);
          local_e8 = local_138;
          ppuVar11 = &local_118;
          FUN_140265f80(local_res8,local_res10,&local_288,7,ppuVar11);
          cVar3 = FUN_140e643f0(local_e0,&local_res8,&local_res10);
        } while (cVar3 != '\0');
      }
      FUN_140e63970(local_e0,&local_res8,&local_res10);
      if (local_d0 != 0) {
        FUN_140e4cd60();
      }
    } while (0 < (int)uVar7);
    param_3 = local_res18;
  }
  local_228 = 0x28d;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_26c = 0;
  local_278 = 0;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  FUN_140e87930(uVar5,DAT_1419ffba8,0x80000000,&local_278);
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  _eh_vector_destructor_iterator_(local_198,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

