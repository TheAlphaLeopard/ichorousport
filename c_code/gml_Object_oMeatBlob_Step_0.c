// gml_Object_oMeatBlob_Step_0 @ 0x140b53d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oMeatBlob_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined1 **ppuVar6;
  ulonglong in_stack_fffffffffffffda0;
  ulonglong uVar8;
  undefined1 **ppuVar9;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
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
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_100 = "gml_Script_anon@1320@gml_Object_oMeatBlob_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x4d;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1d8,0x10,0xd,FUN_1400424d0,FUN_140041b30);
  uStack_1dc = 0xffffff;
  local_1e8 = (longlong *)0x0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_1fc = 0xffffff;
  local_208 = (longlong *)0x0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_22c = 0;
  local_238 = 0;
  local_20c = 0;
  local_218 = 0;
  local_21c = 0;
  local_228 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x4e;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4268);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_f8 = 0x50;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uStack_23c = 6;
    in_stack_fffffffffffffda0 = in_stack_fffffffffffffda0 & 0xffffffffffffff00;
    uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_141a0a808,0x80000000,&local_1e8,uVar5,in_stack_fffffffffffffda0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_23c = 6;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_1f8,uVar5,
                  in_stack_fffffffffffffda0 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar5 >> 0x20);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_23c = uStack_1dc;
    uStack_240 = uStack_1e0;
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
      local_248 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_248,&local_1e8);
    }
    uStack_24c = 7;
    local_258 = (longlong *)CONCAT44(local_258._4_4_,2);
    FUN_1400462a0(&local_248,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = local_248;
    uStack_250 = uStack_240;
    uStack_24c = uStack_23c;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_258);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_98 = local_1d8;
    local_258 = (longlong *)local_1f8;
    uStack_250 = uStack_1f0;
    uStack_24c = uStack_1ec;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_258);
    local_90 = local_1c8;
    uStack_24c = 0xf;
    local_258 = (longlong *)0x1000000000000cb;
    local_248 = (longlong *)0x1000000000000cb;
    uStack_240 = uStack_250;
    uStack_23c = 0xf;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_248);
    local_88 = local_1b8;
    ppuVar9 = &local_98;
    ppuVar6 = (undefined1 **)CONCAT44(uVar7,DAT_141a10408);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_238,3,ppuVar6,ppuVar9);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uStack_24c = 6;
      uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar5 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
      local_258 = param_1;
      FUN_140e87440(&local_258,DAT_141a0a808,0x80000000,&local_1e8,uVar5,uVar8);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_24c = 6;
      uVar5 = uVar5 & 0xffffffffffffff00;
      local_258 = param_1;
      FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f8,uVar5,uVar8 & 0xffffffffffffff00)
      ;
      uVar7 = (undefined4)(uVar5 >> 0x20);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_23c = uStack_1dc;
      uStack_240 = uStack_1e0;
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_248 = local_1e8;
      }
      else {
        FUN_1400419b0(&local_248,&local_1e8);
      }
      uStack_24c = 7;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,2);
      FUN_1400462a0(&local_248,&local_258);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = local_248;
      uStack_250 = uStack_240;
      uStack_24c = uStack_23c;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_258);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_80 = local_1a8;
      local_258 = (longlong *)local_1f8;
      uStack_250 = uStack_1f0;
      uStack_24c = uStack_1ec;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_258);
      local_78 = local_198;
      uStack_24c = 0xf;
      local_258 = (longlong *)0x100000000000149;
      local_248 = (longlong *)0x100000000000149;
      uStack_240 = uStack_250;
      uStack_23c = 0xf;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_248);
      ppuVar9 = &local_80;
      ppuVar6 = (undefined1 **)CONCAT44(uVar7,DAT_141a10408);
      local_70 = local_188;
      uVar2 = FUN_140e634e0(param_1,param_2,&local_218,3,ppuVar6,ppuVar9);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 == '\0') {
        local_f8 = 0x51;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uStack_24c = 6;
        uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        uVar5 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
        local_258 = param_1;
        FUN_140e87440(&local_258,DAT_141a0a808,0x80000000,&local_1e8,uVar5,uVar8);
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        uStack_24c = 6;
        ppuVar9 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
        local_258 = param_1;
        FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f8,uVar5 & 0xffffffffffffff00,
                      ppuVar9);
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = local_1e8;
        uStack_250 = uStack_1e0;
        uStack_24c = uStack_1dc;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_258);
        local_68 = local_178;
        local_258 = (longlong *)local_1f8;
        uStack_250 = uStack_1f0;
        uStack_24c = uStack_1ec;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_258);
        local_60 = local_168;
        puVar3 = (undefined8 *)FUN_140e8da20(&local_b0,param_1,2,&DAT_1419ec270,&DAT_1419ec290);
        if (puVar3 != &local_158) {
          local_258 = (longlong *)*puVar3;
          uStack_250 = *(undefined4 *)(puVar3 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_258);
        }
        local_58 = &local_158;
        puVar3 = (undefined8 *)FUN_140e8da20(&local_c0,param_1,2,&DAT_1419ec280,&DAT_1419ec2c0);
        if (puVar3 != &local_148) {
          local_258 = (longlong *)*puVar3;
          uStack_250 = *(undefined4 *)(puVar3 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_258);
        }
        local_50 = &local_148;
        local_258 = (longlong *)CONCAT44(uRam00000001419ec254,_DAT_1419ec250);
        uStack_250 = uRam00000001419ec258;
        uStack_24c = uRam00000001419ec25c;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_258);
        local_48 = local_138;
        local_258 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_258);
        local_40 = local_128;
        local_258 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_258);
        local_38 = local_118;
        ppuVar6 = &local_68;
        gml_Script_get_blood_col(param_1,param_2,&local_228,7,ppuVar6);
      }
    }
    local_f8 = 0x53;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uStack_24c = 6;
    uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar5 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
    local_258 = param_1;
    FUN_140e87440(&local_258,DAT_141a0a798,0x80000000,&local_208,uVar5,uVar8);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    uVar5 = uVar5 & 0xffffffffffffff00;
    local_258 = param_1;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f8,uVar5,uVar8 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar5 >> 0x20);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_23c = uStack_1fc;
    uStack_240 = uStack_200;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_248 = local_208;
    }
    else {
      FUN_1400419b0(&local_248,&local_208);
    }
    uStack_24c = 7;
    local_258 = (longlong *)CONCAT44(local_258._4_4_,2);
    FUN_1400460e0(&local_248,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = local_248;
    uStack_250 = uStack_240;
    uStack_24c = uStack_23c;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_258);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_98 = local_1d8;
    local_258 = (longlong *)local_1f8;
    uStack_250 = uStack_1f0;
    uStack_24c = uStack_1ec;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_258);
    local_90 = local_1c8;
    uStack_24c = 0xf;
    local_258 = (longlong *)0x1000000000000cb;
    local_248 = (longlong *)0x1000000000000cb;
    uStack_240 = uStack_250;
    uStack_23c = 0xf;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_248);
    local_88 = local_1b8;
    ppuVar9 = &local_98;
    ppuVar6 = (undefined1 **)CONCAT44(uVar7,DAT_141a10408);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_238,3,ppuVar6,ppuVar9);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      uStack_24c = 6;
      uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar5 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
      local_258 = param_1;
      FUN_140e87440(&local_258,DAT_141a0a798,0x80000000,&local_208,uVar5,uVar8);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_24c = 6;
      uVar5 = uVar5 & 0xffffffffffffff00;
      local_258 = param_1;
      FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f8,uVar5,uVar8 & 0xffffffffffffff00)
      ;
      uVar7 = (undefined4)(uVar5 >> 0x20);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_23c = uStack_1fc;
      uStack_240 = uStack_200;
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
        local_248 = local_208;
      }
      else {
        FUN_1400419b0(&local_248,&local_208);
      }
      uStack_24c = 7;
      local_258 = (longlong *)CONCAT44(local_258._4_4_,2);
      FUN_1400460e0(&local_248,&local_258);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = local_248;
      uStack_250 = uStack_240;
      uStack_24c = uStack_23c;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_258);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_80 = local_1a8;
      local_258 = (longlong *)local_1f8;
      uStack_250 = uStack_1f0;
      uStack_24c = uStack_1ec;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_258);
      local_78 = local_198;
      uStack_24c = 0xf;
      local_258 = (longlong *)0x100000000000149;
      local_248 = (longlong *)0x100000000000149;
      uStack_240 = uStack_250;
      uStack_23c = 0xf;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_248);
      ppuVar9 = &local_80;
      ppuVar6 = (undefined1 **)CONCAT44(uVar7,DAT_141a10408);
      local_70 = local_188;
      uVar2 = FUN_140e634e0(param_1,param_2,&local_218,3,ppuVar6,ppuVar9);
      cVar1 = FUN_140e491e0(uVar2);
      if (cVar1 == '\0') {
        local_f8 = 0x54;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uStack_24c = 6;
        uVar8 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        uVar5 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
        local_258 = param_1;
        FUN_140e87440(&local_258,DAT_141a0a798,0x80000000,&local_208,uVar5,uVar8);
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        uStack_24c = 6;
        ppuVar9 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
        local_258 = param_1;
        FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_1f8,uVar5 & 0xffffffffffffff00,
                      ppuVar9);
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = local_208;
        uStack_250 = uStack_200;
        uStack_24c = uStack_1fc;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_258);
        local_68 = local_178;
        local_258 = (longlong *)local_1f8;
        uStack_250 = uStack_1f0;
        uStack_24c = uStack_1ec;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_258);
        local_60 = local_168;
        puVar3 = (undefined8 *)FUN_140e8da20(&local_d0,param_1,2,&DAT_1419ec2b0,&DAT_1419ec2a0);
        if (puVar3 != &local_158) {
          local_258 = (longlong *)*puVar3;
          uStack_250 = *(undefined4 *)(puVar3 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_258);
        }
        local_58 = &local_158;
        puVar3 = (undefined8 *)FUN_140e8da20(&local_e0,param_1,2,&DAT_1419ec280,&DAT_1419ec2c0);
        if (puVar3 != &local_148) {
          local_258 = (longlong *)*puVar3;
          uStack_250 = *(undefined4 *)(puVar3 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_258);
        }
        local_50 = &local_148;
        local_258 = (longlong *)CONCAT44(uRam00000001419ec254,_DAT_1419ec250);
        uStack_250 = uRam00000001419ec258;
        uStack_24c = uRam00000001419ec25c;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_258);
        local_48 = local_138;
        local_258 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_258);
        local_40 = local_128;
        local_258 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_250 = DAT_1419df7b8;
        uStack_24c = DAT_1419df7bc;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_258);
        local_38 = local_118;
        ppuVar6 = &local_68;
        gml_Script_get_blood_col(param_1,param_2,&local_228,7,ppuVar6);
      }
    }
    local_f8 = 0x56;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eff48);
    FUN_140e87440(uVar2,DAT_1419f4a98,0x80000000,&local_f0,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_238,0,&local_f0,0);
  }
  else {
    local_f8 = 0x4e;
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
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
  _eh_vector_destructor_iterator_(local_1d8,0x10,0xd,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

