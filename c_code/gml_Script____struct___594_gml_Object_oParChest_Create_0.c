// gml_Script____struct___594_gml_Object_oParChest_Create_0 @ 0x140ba5160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___594_gml_Object_oParChest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 uVar9;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined8 local_1f8;
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined1 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res18 = 0;
  local_1d0 = "gml_Script_anon@2027@___struct___594@gml_Object_oParChest_Create_0";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 99;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_218,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_174 = 0xffffff;
  local_180 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_26c = 0;
  local_278 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 100;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a56b40);
  uStack_25c = DAT_141dda0a4;
  uStack_260 = DAT_141dda0a0;
  if ((1 << ((byte)DAT_141dda0a4 & 0x1f) & 0x46U) == 0) {
    local_268 = DAT_141dda098;
  }
  else {
    FUN_1400419b0(&local_268,&DAT_141dda098);
  }
  uVar9 = uStack_25c;
  local_238 = local_268;
  uStack_230 = uStack_260;
  uStack_22c = uStack_25c;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_238);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_1b0 = local_218;
  if (puVar3 != &local_208) {
    local_238 = *puVar3;
    uStack_230 = *(undefined4 *)(puVar3 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_238);
  }
  local_1a8 = &local_208;
  ppuVar7 = &local_1b0;
  puVar3 = (undefined8 *)FUN_140e64420(local_res8,local_res10,&local_e8,2,ppuVar7);
  uVar9 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
  if (puVar3 != &local_1f8) {
    local_238 = *puVar3;
    uStack_230 = *(undefined4 *)(puVar3 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_238);
  }
  local_1a0 = &local_1f8;
  uVar4 = CONCAT44(uVar9,DAT_141a086f8);
  puVar3 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar4,&local_1a0);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_180) {
    local_238 = *puVar3;
    uStack_230 = *(undefined4 *)(puVar3 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_238);
  }
  FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
  local_1c8 = 0x65;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_21c = 0xf;
  local_228 = (longlong *)0x100000200000080;
  local_238 = 0x100000200000080;
  uStack_230 = uStack_220;
  uStack_22c = 0xf;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_238);
  local_1b0 = local_218;
  ppuVar7 = &local_1b0;
  uVar8 = CONCAT44(uVar9,DAT_141a07788);
  FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar8,ppuVar7);
  local_1c8 = 0x66;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1c8 = 0x83;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1b4 = 0;
    local_1c0 = 0;
    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1c0);
    local_1c8 = 0x84;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    uStack_21c = 6;
    local_228 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_228,DAT_141a0a728,0x80000000,&local_128,uVar8,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_248 = (undefined4)local_128;
    uStack_244 = local_128._4_4_;
    uStack_240 = uStack_120;
    uStack_23c = uStack_11c;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_248);
    local_1b0 = local_218;
    puVar3 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_278,1,CONCAT44(uVar9,DAT_141a049b8),
                           &local_1b0);
    uStack_25c = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_260 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
      local_268 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_268,puVar3);
    }
    local_res18 = 0x10;
    uStack_21c = 7;
    local_228 = (longlong *)CONCAT44(local_228._4_4_,1);
    FUN_1400462a0(&local_268,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_248 = (undefined4)local_268;
    uStack_244 = local_268._4_4_;
    uStack_240 = uStack_260;
    uStack_23c = uStack_25c;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_248);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_190);
  }
  else {
    local_1c8 = 0x68;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1b4 = 0;
    local_1c0 = 0x3ff0000000000000;
    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1c0);
    local_1c8 = 0x69;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_184 = 0;
    local_190 = 0;
    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_190);
    local_1c8 = 0x6b;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56b60);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_1c8 = 0x6d;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      uStack_24c = 6;
      local_258 = local_res8;
      uVar10 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_108,uVar8,uVar10);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_24c = 6;
      local_258 = local_res8;
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_140,uVar8,uVar10);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_24c = 6;
      local_258 = local_res8;
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_141a02ee8,0x80000000,&local_150,uVar8,uVar10 & 0xffffffffffffff00
                   );
      uVar9 = (undefined4)(uVar8 >> 0x20);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_238 = local_108;
      uStack_230 = uStack_100;
      uStack_22c = uStack_fc;
      if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_238);
      local_1b0 = local_218;
      uStack_25c = local_134;
      uStack_260 = local_138;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) == 0) {
        local_268 = local_140;
      }
      else {
        FUN_1400419b0(&local_268,&local_140);
      }
      local_res18 = 1;
      uStack_24c = 7;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,0xc);
      FUN_1400462a0(&local_268,&local_258);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_238 = local_268;
      uStack_230 = uStack_260;
      uStack_22c = uStack_25c;
      if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_238);
      local_res18 = 0;
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_1a8 = &local_208;
      uStack_25c = local_144;
      uStack_260 = local_148;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
        local_268 = local_150;
      }
      else {
        FUN_1400419b0(&local_268,&local_150);
      }
      local_res18 = 2;
      uStack_24c = 7;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,1);
      FUN_1400462a0(&local_268,&local_258);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_238 = local_268;
      uStack_230 = uStack_260;
      uStack_22c = uStack_25c;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_238);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_1a0 = &local_1f8;
      uStack_21c = 0xf;
      local_228 = (longlong *)0x10000000000004f;
      local_238 = 0x10000000000004f;
      uStack_230 = uStack_220;
      uStack_22c = 0xf;
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_238);
      local_198 = local_1e8;
      ppuVar7 = &local_1b0;
      uVar8 = CONCAT44(uVar9,DAT_141a02e88);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_278,4,uVar8,ppuVar7);
      iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
      if (0 < iVar2) {
        do {
          local_1c8 = 0x6e;
          uStack_cc = 0xf;
          local_d8 = 0x1000001000000be;
          local_248 = 0xbe;
          uStack_244 = 0x1000001;
          uStack_240 = uStack_d0;
          uStack_23c = 0xf;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          FUN_140041b80(&local_180,&local_248);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_180);
          local_1c8 = 0x6f;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_278 = 0;
          local_270 = 0;
          local_26c = 5;
          local_248 = _DAT_1419ec730;
          uStack_244 = uRam00000001419ec734;
          uStack_240 = uRam00000001419ec738;
          uStack_23c = uRam00000001419ec73c;
          if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_248);
          local_1b0 = local_218;
          local_248 = _DAT_1419ec7b0;
          uStack_244 = uRam00000001419ec7b4;
          uStack_240 = uRam00000001419ec7b8;
          uStack_23c = uRam00000001419ec7bc;
          if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_248);
          local_1a8 = &local_208;
          puVar3 = (undefined8 *)FUN_140e78db0(&local_278,2,&local_1b0);
          if (puVar3 != &local_160) {
            local_248 = *(undefined4 *)puVar3;
            uStack_244 = *(undefined4 *)((longlong)puVar3 + 4);
            uStack_240 = *(undefined4 *)(puVar3 + 1);
            uStack_23c = *(undefined4 *)((longlong)puVar3 + 0xc);
            if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_160);
            }
            FUN_140041b80(&local_160,&local_248);
          }
          FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_160);
          local_1c8 = 0x70;
          if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_170);
          }
          local_164 = 0;
          local_170 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_170);
          local_1c8 = 0x72;
          puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          local_ec = 6;
          local_f8 = local_res8;
          uVar8 = uVar8 & 0xffffffffffffff00;
          FUN_140e87440(&local_f8,DAT_141a0f7f8,0x80000000,&local_118,uVar8,
                        (ulonglong)ppuVar7 & 0xffffffffffffff00);
          uVar9 = (undefined4)(uVar8 >> 0x20);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140e609c0(local_res8);
          local_258 = (longlong *)FUN_140e794b0(0,0);
          uStack_24c = 0;
          local_res18 = 4;
          FUN_140042560(&local_258,&local_118);
          if (&local_258 != puVar3) {
            local_248 = (undefined4)local_258;
            uStack_244 = local_258._4_4_;
            uStack_240 = uStack_250;
            uStack_23c = uStack_24c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            FUN_140041b80(puVar3,&local_248);
          }
          local_res18 = 0;
          if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          FUN_140e60910(1);
          local_1c8 = 0x73;
          puVar5 = (ulonglong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          uVar8 = FUN_140e794b0(0,0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = uVar8 ^ 0x8000000000000000;
          local_1c8 = 0x75;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_278 = 0;
          local_270 = 0;
          local_26c = 5;
          puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a868);
          local_248 = _DAT_141dc7350;
          uStack_244 = uRam0000000141dc7354;
          uStack_240 = uRam0000000141dc7358;
          uStack_23c = uRam0000000141dc735c;
          if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_248);
          local_1b0 = local_218;
          FUN_140e609c0(local_res8);
          uVar4 = CONCAT44(uVar9,DAT_141a0a0d8);
          puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar4,&local_1b0)
          ;
          uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
          uStack_260 = *(undefined4 *)(puVar6 + 1);
          if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
            local_268 = *puVar6;
          }
          else {
            FUN_1400419b0(&local_268,puVar6);
          }
          local_res18 = 8;
          uStack_21c = 7;
          local_228 = (longlong *)CONCAT44(local_228._4_4_,100);
          FUN_140042560(&local_268,&local_228);
          if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          if (&local_268 != puVar3) {
            local_248 = (undefined4)local_268;
            uStack_244 = local_268._4_4_;
            uStack_240 = uStack_260;
            uStack_23c = uStack_25c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            FUN_140041b80(puVar3,&local_248);
          }
          if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140e60910(1);
          local_1c8 = 0x77;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_278 = 0;
          local_270 = 0;
          local_26c = 5;
          uStack_22c = 0xf;
          local_238 = 0x10000020000007f;
          local_248 = 0x7f;
          uStack_244 = 0x1000002;
          uStack_240 = uStack_230;
          uStack_23c = 0xf;
          if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_248);
          local_1b0 = local_218;
          local_248 = _DAT_1419ec7e0;
          uStack_244 = uRam00000001419ec7e4;
          uStack_240 = uRam00000001419ec7e8;
          uStack_23c = uRam00000001419ec7ec;
          if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          FUN_140041b80(&local_208,&local_248);
          local_1a8 = &local_208;
          local_248 = _DAT_1419df7a0;
          uStack_244 = uRam00000001419df7a4;
          uStack_240 = uRam00000001419df7a8;
          uStack_23c = uRam00000001419df7ac;
          if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_248);
          local_1a0 = &local_1f8;
          ppuVar7 = &local_1b0;
          uVar8 = CONCAT44(uVar9,DAT_141a0a2e8);
          FUN_140e634e0(local_res8,local_res10,&local_278,3,uVar8,ppuVar7);
          cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_c8,&local_res8,&local_res10);
      if (local_b8 != 0) {
        FUN_140e4cd60();
      }
    }
    else {
      local_1c8 = 0x7d;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uVar9 = (undefined4)(uVar8 >> 0x20);
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      uStack_22c = 0xf;
      local_238 = 0x10000020000007f;
      local_248 = 0x7f;
      uStack_244 = 0x1000002;
      uStack_240 = uStack_230;
      uStack_23c = 0xf;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_248);
      local_1b0 = local_218;
      local_248 = _DAT_1419ec7e0;
      uStack_244 = uRam00000001419ec7e4;
      uStack_240 = uRam00000001419ec7e8;
      uStack_23c = uRam00000001419ec7ec;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_248);
      local_1a8 = &local_208;
      local_248 = _DAT_1419df7a0;
      uStack_244 = uRam00000001419df7a4;
      uStack_240 = uRam00000001419df7a8;
      uStack_23c = uRam00000001419df7ac;
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_248);
      local_1a0 = &local_1f8;
      FUN_140e634e0(local_res8,local_res10,&local_278,3,CONCAT44(uVar9,DAT_141a0a2e8),&local_1b0);
    }
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  _eh_vector_destructor_iterator_(local_218,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}

