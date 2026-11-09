// gml_Script____struct___611_gml_Object_oPatronVendor_Create_0 @ 0x140bd6b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___611_gml_Object_oPatronVendor_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar9;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_190 = "gml_Script_anon@8753@___struct___611@gml_Object_oPatronVendor_Create_0";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 500;
  uVar9 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1ac = 0;
  local_1b8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0x1f5;
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x10000000000007e;
  local_1a8 = 0x10000000000007e;
  uStack_1a0 = uStack_1c0;
  uStack_19c = 0xf;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1a8);
  local_138 = local_178;
  ppuVar11 = &local_138;
  uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar8,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_188 = 0x1fb;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_e8,uVar8,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    local_1c8 = (longlong *)CONCAT44(uRam0000000141dc73d4,_DAT_141dc73d0);
    uStack_1c0 = uRam0000000141dc73d8;
    uStack_1bc = uRam0000000141dc73dc;
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    local_138 = local_178;
    ppuVar11 = &local_138;
    uVar8 = CONCAT44(uVar9,DAT_141a0a0d8);
    puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar8,ppuVar11);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar6);
    }
    local_res18 = 1;
    uStack_1bc = 7;
    local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,2);
    FUN_140042560(&local_1a8,&local_1c8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar2 = FUN_140e851f0(&local_e8,&local_1a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (uVar2 < 0x80000000) {
      local_188 = 0x1fd;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      local_188 = 0x1fe;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uStack_1bc = 6;
      local_1c8 = local_res8;
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_78,uVar8,uVar10);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = 6;
      local_1c8 = local_res8;
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_88,uVar8,uVar10);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = 6;
      local_1c8 = local_res8;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_141a1b910,0x80000000,&local_98,uVar8,uVar10 & 0xffffffffffffff00)
      ;
      uVar9 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = (longlong *)local_78;
      uStack_1c0 = uStack_70;
      uStack_1bc = uStack_6c;
      if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
      local_138 = local_178;
      local_1c8 = (longlong *)local_88;
      uStack_1c0 = uStack_80;
      uStack_1bc = uStack_7c;
      if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_1c8);
      local_130 = local_168;
      local_1c8 = (longlong *)local_98;
      uStack_1c0 = uStack_90;
      uStack_1bc = uStack_8c;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1c8);
      local_128 = local_158;
      uStack_1bc = 0xf;
      local_1c8 = (longlong *)0x10000000000002d;
      local_1a8 = 0x10000000000002d;
      uStack_1a0 = uStack_1c0;
      uStack_19c = 0xf;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1a8);
      local_120 = local_148;
      ppuVar11 = &local_138;
      ppuVar7 = (undefined1 **)CONCAT44(uVar9,DAT_141a0a7c8);
      FUN_140e634e0(local_res8,local_res10,&local_1b8,4,ppuVar7,ppuVar11);
      local_188 = 0x1ff;
      local_1c8 = (longlong *)0x3ff0000000000000;
      uStack_1bc = 0xd;
      local_1a8 = 0x3ff0000000000000;
      uStack_1a0 = uStack_1c0;
      uStack_19c = 0xd;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_1a8);
      uStack_1bc = 0xf;
      local_1c8 = (longlong *)0x100000000000147;
      FUN_140e87930(&local_1c8,DAT_1419fec78,0x80000000,&local_b8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_188 = 0x201;
      uStack_1bc = 0xf;
      local_1c8 = (longlong *)0x1000000000000ee;
      iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_1c8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if (0 < iVar3) {
        do {
          local_188 = 0x203;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          local_1c8 = (longlong *)CONCAT44(uRam00000001419ec8e4,_DAT_1419ec8e0);
          uStack_1c0 = uRam00000001419ec8e8;
          uStack_1bc = uRam00000001419ec8ec;
          if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1c8);
          local_138 = local_178;
          local_1c8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1c0 = DAT_1419df7b8;
          uStack_1bc = DAT_1419df7bc;
          if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1c8);
          local_130 = local_168;
          ppuVar7 = &local_138;
          gml_Script_truestate_begin_step(local_res8,local_res10,&local_1b8,2,ppuVar7);
          cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_68,&local_res8,&local_res10);
      DAT_141a67c38 = 1;
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_e8,uVar8,ppuVar11);
      DAT_141a67c38 = 0;
      DAT_141a72aac = 0;
      if (local_58 != 0) {
        FUN_140e4cd60();
      }
    }
    local_188 = 0x208;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_e8,uVar8,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    local_1c8 = (longlong *)CONCAT44(uRam0000000141dc73d4,_DAT_141dc73d0);
    uStack_1c0 = uRam0000000141dc73d8;
    uStack_1bc = uRam0000000141dc73dc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    local_138 = local_178;
    ppuVar11 = &local_138;
    uVar8 = CONCAT44(uVar9,DAT_141a0a0d8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar8,ppuVar11);
    uVar2 = FUN_140e851f0(&local_e8,uVar5,DAT_141955260,1);
    if (uVar2 < 0x80000000) {
      local_188 = 0x20a;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x3ff0000000000000;
      local_188 = 0x20b;
      uStack_1bc = 0xf;
      local_1c8 = (longlong *)0x10000010000032d;
      local_1a8 = 0x10000010000032d;
      uStack_1a0 = uStack_1c0;
      uStack_19c = 0xf;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_1a8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_c8);
      local_188 = 0x20c;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 0;
      local_f8 = 0x3ff0000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_f8);
      local_188 = 0x20e;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uVar8 = 0;
      FUN_140265ac0(local_res8,local_res10,&local_1b8,0,0);
      local_188 = 0x20f;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
      ppuVar11 = (undefined1 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_1419f7388,0x80000000,&local_a8,uVar8,ppuVar11);
      cVar1 = FUN_140e491e0(&local_a8);
      if (cVar1 == '\0') {
        local_188 = 0x211;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        uVar9 = (undefined4)(uVar8 >> 0x20);
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        uStack_1bc = 0xf;
        local_1c8 = (longlong *)0x100000200000011;
        local_1a8 = 0x100000200000011;
        uStack_1a0 = uStack_1c0;
        uStack_19c = 0xf;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1a8);
        local_138 = local_178;
        ppuVar11 = &local_138;
        uVar8 = CONCAT44(uVar9,DAT_141a07888);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b8,1,uVar8,ppuVar11);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 == '\0') {
          local_188 = 0x213;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          uVar9 = (undefined4)(uVar8 >> 0x20);
          local_108 = 0;
          local_100 = 0;
          local_fc = 5;
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x100000200000007;
          local_1a8 = 0x100000200000007;
          uStack_1a0 = uStack_1c0;
          uStack_19c = 0xf;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1a8);
          local_130 = local_168;
          uVar5 = CONCAT44(uVar9,DAT_141a07788);
          FUN_140e634e0(local_res8,local_res10,&local_108,1,uVar5,&local_130);
          uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_188 = 0x214;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x1000002000000a8;
          local_1a8 = 0x1000002000000a8;
          uStack_1a0 = uStack_1c0;
          uStack_19c = 0xf;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1a8);
          local_138 = local_178;
          local_1c8 = (longlong *)CONCAT44(uRam00000001419ec974,_DAT_1419ec970);
          uStack_1c0 = uRam00000001419ec978;
          uStack_1bc = uRam00000001419ec97c;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1c8);
          local_130 = local_168;
          local_1c8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
          uStack_1c0 = uRam00000001419df7a8;
          uStack_1bc = uRam00000001419df7ac;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1c8);
          local_128 = local_158;
          uVar5 = CONCAT44(uVar9,DAT_141a0a2e8);
          FUN_140e634e0(local_res8,local_res10,&local_1b8,3,uVar5,&local_138);
          uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_188 = 0x215;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x100000200000011;
          local_1a8 = 0x100000200000011;
          uStack_1a0 = uStack_1c0;
          uStack_19c = 0xf;
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1a8);
          local_138 = local_178;
          local_1c8 = (longlong *)CONCAT44(uRam00000001419ec974,_DAT_1419ec970);
          uStack_1c0 = uRam00000001419ec978;
          uStack_1bc = uRam00000001419ec97c;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1c8);
          local_130 = local_168;
          local_1c8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
          uStack_1c0 = uRam00000001419df7a8;
          uStack_1bc = uRam00000001419df7ac;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1c8);
          local_128 = local_158;
          ppuVar11 = &local_138;
          uVar8 = CONCAT44(uVar9,DAT_141a0a2e8);
          FUN_140e634e0(local_res8,local_res10,&local_1b8,3,uVar8,ppuVar11);
        }
        local_188 = 0x218;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
        local_1c8 = (longlong *)0x3ff0000000000000;
        uStack_1bc = 0xd;
        local_1a8 = 0x3ff0000000000000;
        uStack_1a0 = uStack_1c0;
        uStack_19c = 0xd;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_1a8);
        FUN_140e87930(uVar5,DAT_1419f7388,0x80000000,&local_d8);
      }
    }
    else {
      local_188 = 0x21e;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
      uVar5 = FUN_140e794b0(0,0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = uVar5;
    }
    local_188 = 0x222;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_118,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    FUN_1400460e0(&local_118,uVar4);
    FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_118);
  }
  else {
    local_188 = 0x1f7;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_10c = 0;
    local_118 = 0;
    FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_118);
    local_188 = 0x1f8;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

