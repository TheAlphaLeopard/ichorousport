// gml_Object_oRotManager_Create_0 @ 0x140d41520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRotManager_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar10;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  longlong *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
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
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168 [2];
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  longlong **local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 *local_68 [2];
  undefined1 local_58 [16];
  longlong local_48;
  
  local_240 = "gml_Object_oRoomExit_Step_0";
  local_238 = 0;
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_248;
  uVar10 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_168,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_224 = 0xffffff;
  local_230 = 0;
  local_238 = 2;
  uStack_25c = 0xf;
  local_268 = 0x1000000000000ee;
  local_278 = (longlong *)0x1000000000000ee;
  uStack_270 = uStack_260;
  uStack_26c = 0xf;
  if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_278);
  local_b8 = local_168;
  ppuVar11 = (undefined1 **)&local_b8;
  uVar8 = CONCAT44(uVar10,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_258,1,uVar8,ppuVar11);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_238 = 2;
  }
  else {
    local_238 = 4;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    uStack_26c = 6;
    local_278 = local_res8;
    uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_278,DAT_1419fe0e8,0x80000000,&local_188,uVar8,uVar12);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    uStack_26c = 6;
    local_278 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_278,DAT_1419fe158,0x80000000,&local_198,uVar8,uVar12 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_268 = local_188;
    uStack_260 = uStack_180;
    uStack_25c = uStack_17c;
    if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_268);
    local_b8 = local_168;
    local_268 = local_198;
    uStack_260 = uStack_190;
    uStack_25c = uStack_18c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_268);
    local_b0 = local_158;
    uStack_25c = 0xf;
    local_268 = 0x1000000000000ee;
    local_278 = (longlong *)0x1000000000000ee;
    uStack_270 = uStack_260;
    uStack_26c = 0xf;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_278);
    local_a8 = local_148;
    ppuVar11 = (undefined1 **)&local_b8;
    uVar8 = CONCAT44(uVar10,DAT_141a12628);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_258,3,uVar8,ppuVar11);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      uStack_26c = 0xf;
      local_278 = (longlong *)0x1000000000000ee;
      FUN_140e87170(&local_278,DAT_1419fded8,0x80000000,&local_1a8,local_res8,local_res10);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uStack_26c = 0xf;
      local_278 = (longlong *)0x1000000000000ee;
      FUN_140e87170(&local_278,DAT_1419fdd18,0x80000000,&local_1b8,local_res8,local_res10);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uStack_26c = 0xf;
      local_278 = (longlong *)0x1000000000000ee;
      FUN_140e87170(&local_278,DAT_1419fe0e8,0x80000000,&local_1c8,local_res8,local_res10);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uStack_26c = 0xf;
      local_278 = (longlong *)0x1000000000000ee;
      plVar9 = local_res8;
      FUN_140e87170(&local_278,DAT_1419fe158,0x80000000,&local_1d8,local_res8,local_res10);
      uVar10 = (undefined4)((ulonglong)plVar9 >> 0x20);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_268 = local_1a8;
      uStack_260 = uStack_1a0;
      uStack_25c = uStack_19c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_268);
      local_a0 = local_138;
      local_268 = local_1b8;
      uStack_260 = uStack_1b0;
      uStack_25c = uStack_1ac;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_268);
      local_98 = local_128;
      local_268 = local_1c8;
      uStack_260 = uStack_1c0;
      uStack_25c = uStack_1bc;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_268);
      local_90 = local_118;
      local_268 = local_1d8;
      uStack_260 = uStack_1d0;
      uStack_25c = uStack_1cc;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_268);
      plVar9 = local_res8;
      local_88 = local_108;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_ec = 6;
      local_f8 = plVar9;
      uVar3 = FUN_140e5c910();
      FUN_140e42c10(uVar3,plVar9);
      local_80 = &local_f8;
      local_268 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
      uStack_260 = uRam00000001419df7c8;
      uStack_25c = uRam00000001419df7cc;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_268);
      local_78 = local_e8;
      local_268 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_260 = uRam00000001419df7a8;
      uStack_25c = uRam00000001419df7ac;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_268);
      local_70 = local_d8;
      ppuVar11 = &local_a0;
      uVar8 = CONCAT44(uVar10,DAT_1419f60a8);
      uVar3 = FUN_140e634e0(local_res8,local_res10,&local_220,7,uVar8,ppuVar11);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') goto LAB_140d42197;
    }
    local_238 = 6;
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    local_230 = 0;
    local_228 = 0;
    local_224 = 5;
    puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a01248);
    uStack_26c = 0xf;
    local_278 = (longlong *)0x1000000000000ff;
    FUN_140e87440(&local_278,DAT_1419fa628,0x80000000,&local_1f0,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (puVar4 != &local_c8) {
      local_268 = *puVar4;
      uStack_260 = *(undefined4 *)(puVar4 + 1);
      uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_268);
    }
    local_68[0] = &local_c8;
    uStack_26c = 0xf;
    local_278 = (longlong *)0x1000000000000ff;
    uVar3 = FUN_140069500(&local_278);
    ppuVar13 = local_68;
    puVar4 = &local_1f0;
    FUN_140e63610(uVar3,local_res10,&local_230,1,puVar4,ppuVar13);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_238 = 7;
    uStack_26c = 0xf;
    local_278 = (longlong *)0x1000000000000ee;
    iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_278);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (0 < iVar2) {
      do {
        local_238 = 9;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_1419f5df8,0x80000000,&local_200,
                      (ulonglong)puVar4 & 0xffffffffffffff00,
                      (ulonglong)ppuVar13 & 0xffffffffffffff00);
        uStack_26c = DAT_141ddb324;
        uStack_270 = DAT_141ddb320;
        if ((1 << ((byte)DAT_141ddb324 & 0x1f) & 0x46U) == 0) {
          local_278 = DAT_141ddb318;
        }
        else {
          FUN_1400419b0(&local_278,&DAT_141ddb318);
        }
        uVar3 = FUN_140069500(uVar3);
        ppuVar13 = (undefined8 **)0x0;
        puVar4 = &local_200;
        uVar3 = FUN_140e63610(uVar3,local_res10,&local_258,0,puVar4,0);
        iVar2 = FUN_140e851f0(uVar3,&local_278,DAT_141955260,0);
        if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        if (iVar2 == 0) {
          local_238 = 0xb;
          puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
          puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a066f8);
          FUN_140e609c0(local_res8);
          if (puVar5 != puVar6) {
            local_178 = *puVar5;
            uStack_174 = puVar5[1];
            uStack_170 = puVar5[2];
            uStack_16c = puVar5[3];
            if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_178);
          }
          FUN_140e60910(1);
          local_238 = 0xc;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f310);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          *puVar7 = 0;
          local_238 = 0xd;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
          FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_210,
                        (ulonglong)puVar4 & 0xffffffffffffff00,
                        (ulonglong)ppuVar13 & 0xffffffffffffff00);
          local_178 = _DAT_141ddb308;
          uStack_174 = uRam0000000141ddb30c;
          uStack_170 = uRam0000000141ddb310;
          uStack_16c = DAT_141ddb314;
          if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_178);
          local_b8 = local_168;
          uVar3 = FUN_140069500(uVar3);
          ppuVar13 = &local_b8;
          puVar4 = &local_210;
          FUN_140e63610(uVar3,local_res10,&local_258,1,puVar4,ppuVar13);
        }
        local_238 = 0x10;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7f38);
        uStack_25c = 0xd;
        local_268 = 0x3ff0000000000000;
        if (&local_268 != puVar7) {
          local_178 = 0;
          uStack_174 = 0x3ff00000;
          uStack_170 = uStack_260;
          uStack_16c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_178);
        }
        cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_58,&local_res8,&local_res10);
    local_238 = 0x13;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    if (local_48 != 0) {
      FUN_140e4cd60();
    }
  }
LAB_140d42197:
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
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
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_248;
  return;
}

