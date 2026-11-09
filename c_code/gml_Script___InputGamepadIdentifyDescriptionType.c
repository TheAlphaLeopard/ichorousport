// gml_Script___InputGamepadIdentifyDescriptionType @ 0x140090850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputGamepadIdentifyDescriptionType
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar10;
  undefined8 uVar8;
  undefined1 **ppuVar9;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  
  local_1e0 = "gml_Script___InputGamepadGUIDParse";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 5;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_188,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_21c = 0;
  local_228 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_194 = 0;
  local_1a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc5dc) &&
     (_Init_thread_header(&DAT_141ddc5dc), DAT_141ddc5dc == -1)) {
    DAT_141ddc5e0 = (longlong *)FUN_140e63aa0(DAT_141a01278);
    _Init_thread_footer(&DAT_141ddc5dc);
  }
  if (DAT_141ddc041 == '\0') {
    FUN_140e64380(DAT_141ddc5e0,"gml_Script___InputGamepadGUIDParse");
    FUN_140e64380(param_1,"gml_Script___InputGamepadGUIDParse");
  }
  local_1d8 = 7;
  if (DAT_141ddc041 == '\0') {
    DAT_141ddc041 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc5e0 + 0x10))(DAT_141ddc5e0,DAT_141a00fe8);
    FUN_140e609c0(DAT_141ddc5e0);
    uVar5 = CONCAT44(uVar10,DAT_1419fd6d8);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,0,uVar5,0);
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != puVar3) {
      local_238 = *puVar4;
      uStack_230 = *(undefined4 *)(puVar4 + 1);
      uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_238);
    }
    FUN_140e60910(1);
  }
  local_1d8 = 9;
  uVar5 = (**(code **)(*DAT_141ddc5e0 + 8))(DAT_141ddc5e0,DAT_141a00fe8);
  local_238 = CONCAT44(uRam0000000141dc9ccc,_DAT_141dc9cc8);
  uStack_230 = uRam0000000141dc9cd0;
  uStack_22c = DAT_141dc9cd4;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  FUN_140041b80(&local_1c0,&local_238);
  FUN_140e87930(uVar5,DAT_1419fd288,0x80000000,&local_1c0);
  local_1d8 = 10;
  local_238 = CONCAT44(uRam0000000141dc9ccc,_DAT_141dc9cc8);
  uStack_230 = uRam0000000141dc9cd0;
  uStack_22c = DAT_141dc9cd4;
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  FUN_140041b80(&local_1d0,&local_238);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc5e0 + 8))(DAT_141ddc5e0,DAT_141a00fe8);
  FUN_140e87930(puVar3,DAT_1419fd368,0x80000000,&local_1d0);
  local_1d8 = 0xc;
  local_1fc = DAT_141dc9c84;
  local_200 = DAT_141dc9c80;
  if ((1 << ((byte)DAT_141dc9c84 & 0x1f) & 0x46U) == 0) {
    local_208 = DAT_141dc9c78;
  }
  else {
    FUN_1400419b0(&local_208,&DAT_141dc9c78);
  }
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar6,&local_208,DAT_141955260,0);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uVar2 = 1 << ((byte)local_21c & 0x1f);
  if (iVar1 == 0) {
    local_1d8 = 0xe;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_238 = CONCAT44(uRam0000000141dc9cec,_DAT_141dc9ce8);
    uStack_230 = uRam0000000141dc9cf0;
    uStack_22c = DAT_141dc9cf4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_238);
    local_a8 = &local_188;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_228,1,&local_a8);
    local_1d8 = 0xf;
LAB_140090c43:
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc5e0 + 8))(DAT_141ddc5e0,DAT_141a00fe8);
    if (puVar3 == param_3) goto LAB_140091a4f;
    local_238 = *puVar3;
    uStack_230 = *(undefined4 *)(puVar3 + 1);
    uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar3 = &local_238;
  }
  else {
    local_1d8 = 0x22;
    if ((uVar2 & 0x46) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140090cc7:
      local_238 = *puVar6;
      uStack_230 = *(undefined4 *)(puVar6 + 1);
      uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_238);
    }
    else {
      puVar6 = (undefined8 *)*param_5;
      if (puVar6 != &local_188) goto LAB_140090cc7;
    }
    local_a8 = &local_188;
    local_238 = CONCAT44(uRam00000001419dfeb4,_DAT_1419dfeb0);
    uStack_230 = uRam00000001419dfeb8;
    uStack_22c = uRam00000001419dfebc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_238);
    local_a0 = local_178;
    local_238 = CONCAT44(uRam00000001419dfe74,_DAT_1419dfe70);
    uStack_230 = uRam00000001419dfe78;
    uStack_22c = uRam00000001419dfe7c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_238);
    local_1fc = DAT_141dc9c74;
    local_200 = DAT_141dc9c70;
    local_98 = local_168;
    if ((1 << ((byte)DAT_141dc9c74 & 0x1f) & 0x46U) == 0) {
      local_208 = DAT_141dc9c68;
    }
    else {
      FUN_1400419b0(&local_208,&DAT_141dc9c68);
    }
    uVar8 = CONCAT44(uVar10,DAT_141a01268);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_228,3,uVar8,&local_a8);
    uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
    iVar1 = FUN_140e851f0(uVar5,&local_208,DAT_141955260,0);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar1 == 0) {
      local_1d8 = 0x25;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
LAB_140090e74:
        local_238 = *puVar3;
        uStack_230 = *(undefined4 *)(puVar3 + 1);
        uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_238);
      }
      else {
        puVar3 = (undefined8 *)*param_5;
        if (puVar3 != &local_158) goto LAB_140090e74;
      }
      local_90 = &local_158;
      local_238 = CONCAT44(uRam00000001419dfe64,_DAT_1419dfe60);
      uStack_230 = uRam00000001419dfe68;
      uStack_22c = uRam00000001419dfe6c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_238);
      local_88 = local_148;
      local_238 = CONCAT44(uRam00000001419dfe74,_DAT_1419dfe70);
      uStack_230 = uRam00000001419dfe78;
      uStack_22c = uRam00000001419dfe7c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_238);
      local_80 = local_138;
      local_1fc = DAT_141dc9c74;
      local_200 = DAT_141dc9c70;
      if ((1 << ((byte)DAT_141dc9c74 & 0x1f) & 0x46U) == 0) {
        local_208 = DAT_141dc9c68;
      }
      else {
        FUN_1400419b0(&local_208,&DAT_141dc9c68);
      }
      uVar8 = CONCAT44(uVar10,DAT_141a01268);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar8,&local_90);
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar1 = FUN_140e851f0(uVar5,&local_208,DAT_141955260,0);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if (iVar1 != 0) {
        local_1d8 = 0x27;
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a4 = 5;
        local_238 = CONCAT44(uRam0000000141dc9cdc,_DAT_141dc9cd8);
        uStack_230 = uRam0000000141dc9ce0;
        uStack_22c = DAT_141dc9ce4;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_238);
        local_78 = &local_128;
        if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_118)) {
          local_238 = *puVar4;
          uStack_230 = *(undefined4 *)(puVar4 + 1);
          uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_238);
        }
        local_70 = &local_118;
        local_238 = CONCAT44(uRam0000000141dc9c5c,_DAT_141dc9c58);
        uStack_230 = uRam0000000141dc9c60;
        uStack_22c = DAT_141dc9c64;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_238);
        local_68 = local_108;
        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                  (param_1,param_2,&local_1b0,3,&local_78);
        local_1d8 = 0x28;
        goto LAB_140090c43;
      }
      local_1d8 = 0x2d;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
LAB_14009112e:
        local_238 = *puVar3;
        uStack_230 = *(undefined4 *)(puVar3 + 1);
        uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_238);
      }
      else {
        puVar3 = (undefined8 *)*param_5;
        if (puVar3 != &local_188) goto LAB_14009112e;
      }
      local_a8 = &local_188;
      local_238 = CONCAT44(uRam00000001419dfe94,_DAT_1419dfe90);
      uStack_230 = uRam00000001419dfe98;
      uStack_22c = uRam00000001419dfe9c;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_238);
      local_a0 = local_178;
      local_238 = CONCAT44(uRam00000001419dfe74,_DAT_1419dfe70);
      uStack_230 = uRam00000001419dfe78;
      uStack_22c = uRam00000001419dfe7c;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_238);
      local_1fc = DAT_141dc9ca4;
      local_200 = DAT_141dc9ca0;
      if ((1 << ((byte)DAT_141dc9ca4 & 0x1f) & 0x46U) == 0) {
        local_208 = DAT_141dc9c98;
        local_98 = local_168;
      }
      else {
        local_98 = local_168;
        FUN_1400419b0(&local_208,&DAT_141dc9c98);
      }
      uVar8 = CONCAT44(uVar10,DAT_141a01268);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_228,3,uVar8,&local_a8);
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar1 = FUN_140e851f0(uVar5,&local_208,DAT_141955260,0);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if (iVar1 != 0) {
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        if (param_4 < 1) {
          puVar3 = &DAT_1419df7b0;
LAB_1400912d0:
          local_238 = *puVar3;
          uStack_230 = *(undefined4 *)(puVar3 + 1);
          uStack_22c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_238);
        }
        else {
          puVar3 = (undefined8 *)*param_5;
          if (puVar3 != &local_158) goto LAB_1400912d0;
        }
        local_90 = &local_158;
        local_238 = CONCAT44(uRam00000001419dfe94,_DAT_1419dfe90);
        uStack_230 = uRam00000001419dfe98;
        uStack_22c = uRam00000001419dfe9c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_238);
        local_88 = local_148;
        local_238 = CONCAT44(uRam00000001419dfe74,_DAT_1419dfe70);
        uStack_230 = uRam00000001419dfe78;
        uStack_22c = uRam00000001419dfe7c;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_238);
        local_80 = local_138;
        uStack_22c = DAT_141dc9cc4;
        uStack_230 = DAT_141dc9cc0;
        if ((1 << ((byte)DAT_141dc9cc4 & 0x1f) & 0x46U) == 0) {
          local_238 = DAT_141dc9cb8;
        }
        else {
          FUN_1400419b0(&local_238,&DAT_141dc9cb8);
        }
        uVar8 = CONCAT44(uVar10,DAT_141a01268);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar8,&local_90);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        iVar1 = FUN_140e851f0(uVar5,&local_238,DAT_141955260,0);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if (iVar1 != 0) {
          local_1d8 = 0x30;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a4 = 5;
          if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a0);
          }
          local_1a0 = 0;
          local_198 = 0;
          local_194 = 5;
          if (param_4 < 1) {
            puVar3 = &DAT_1419df7b0;
LAB_140091482:
            local_218 = *(undefined4 *)puVar3;
            uStack_214 = *(undefined4 *)((longlong)puVar3 + 4);
            uStack_210 = *(undefined4 *)(puVar3 + 1);
            uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
            if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            FUN_140041b80(&local_128,&local_218);
          }
          else {
            puVar3 = (undefined8 *)*param_5;
            if (puVar3 != &local_128) goto LAB_140091482;
          }
          local_78 = &local_128;
          local_218 = _DAT_1419dfe90;
          uStack_214 = uRam00000001419dfe94;
          uStack_210 = uRam00000001419dfe98;
          uStack_20c = uRam00000001419dfe9c;
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_218);
          local_70 = &local_118;
          local_218 = _DAT_1419dfe70;
          uStack_214 = uRam00000001419dfe74;
          uStack_210 = uRam00000001419dfe78;
          uStack_20c = uRam00000001419dfe7c;
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_218);
          local_68 = local_108;
          local_218 = _DAT_141dc9cd8;
          uStack_214 = uRam0000000141dc9cdc;
          uStack_210 = uRam0000000141dc9ce0;
          uStack_20c = DAT_141dc9ce4;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_218);
          local_60 = local_f8;
          if (param_4 < 1) {
            puVar3 = &DAT_1419df7b0;
LAB_140091588:
            local_218 = *(undefined4 *)puVar3;
            uStack_214 = *(undefined4 *)((longlong)puVar3 + 4);
            uStack_210 = *(undefined4 *)(puVar3 + 1);
            uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
            if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            FUN_140041b80(&local_e8,&local_218);
          }
          else {
            puVar3 = (undefined8 *)*param_5;
            if (puVar3 != &local_e8) goto LAB_140091588;
          }
          local_58 = &local_e8;
          local_218 = _DAT_141dc9ca8;
          uStack_214 = uRam0000000141dc9cac;
          uStack_210 = uRam0000000141dc9cb0;
          uStack_20c = DAT_141dc9cb4;
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_218);
          local_50 = local_d8;
          puVar7 = (undefined4 *)
                   FUN_140e634e0(param_1,param_2,&local_1a0,3,CONCAT44(uVar10,DAT_141a01268),
                                 &local_78);
          if (puVar7 != local_c8) {
            local_218 = *puVar7;
            uStack_214 = puVar7[1];
            uStack_210 = puVar7[2];
            uStack_20c = puVar7[3];
            if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_c8);
            }
            FUN_140041b80(local_c8,&local_218);
          }
          local_48 = local_c8;
          local_218 = _DAT_141dc9c88;
          uStack_214 = uRam0000000141dc9c8c;
          uStack_210 = uRam0000000141dc9c90;
          uStack_20c = DAT_141dc9c94;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_218);
          local_40 = local_b8;
          ppuVar9 = &local_60;
          gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                    (param_1,param_2,&local_1b0,5,ppuVar9);
          uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
        }
      }
      local_1d8 = 0x33;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      uVar5 = (**(code **)(*DAT_141ddc5e0 + 8))(DAT_141ddc5e0,DAT_141a00fe8);
      if (param_4 < 1) {
        puVar3 = &DAT_1419df7b0;
LAB_14009175f:
        local_218 = *(undefined4 *)puVar3;
        uStack_214 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_210 = *(undefined4 *)(puVar3 + 1);
        uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_218);
      }
      else {
        puVar3 = (undefined8 *)*param_5;
        if (puVar3 != &local_188) goto LAB_14009175f;
      }
      local_a8 = &local_188;
      local_218 = _DAT_1419dfe80;
      uStack_214 = uRam00000001419dfe84;
      uStack_210 = uRam00000001419dfe88;
      uStack_20c = uRam00000001419dfe8c;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_218);
      local_a0 = local_178;
      local_218 = _DAT_1419dfe70;
      uStack_214 = uRam00000001419dfe74;
      uStack_210 = uRam00000001419dfe78;
      uStack_20c = uRam00000001419dfe7c;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_218);
      uVar8 = CONCAT44(uVar10,DAT_141a01268);
      local_98 = local_168;
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,3,uVar8,&local_a8);
      uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (puVar3 != &local_1c0) {
        local_218 = *(undefined4 *)puVar3;
        uStack_214 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_210 = *(undefined4 *)(puVar3 + 1);
        uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        FUN_140041b80(&local_1c0,&local_218);
      }
      FUN_140e87930(uVar5,DAT_1419fd288,0x80000000,&local_1c0);
      local_1d8 = 0x34;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc5e0 + 8))(DAT_141ddc5e0,DAT_141a00fe8);
      if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_188)) {
        local_218 = *(undefined4 *)puVar4;
        uStack_214 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_210 = *(undefined4 *)(puVar4 + 1);
        uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_218);
      }
      local_a8 = &local_188;
      local_218 = _DAT_1419dfea0;
      uStack_214 = uRam00000001419dfea4;
      uStack_210 = uRam00000001419dfea8;
      uStack_20c = uRam00000001419dfeac;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_218);
      local_a0 = local_178;
      local_218 = _DAT_1419dfe70;
      uStack_214 = uRam00000001419dfe74;
      uStack_210 = uRam00000001419dfe78;
      uStack_20c = uRam00000001419dfe7c;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_218);
      local_98 = local_168;
      puVar4 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_228,3,CONCAT44(uVar10,DAT_141a01268),&local_a8);
      if (puVar4 != &local_1d0) {
        local_218 = *(undefined4 *)puVar4;
        uStack_214 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_210 = *(undefined4 *)(puVar4 + 1);
        uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d0);
        }
        FUN_140041b80(&local_1d0,&local_218);
      }
      FUN_140e87930(puVar3,DAT_1419fd368,0x80000000,&local_1d0);
    }
    local_1d8 = 0x37;
    if (puVar3 == param_3) goto LAB_140091a4f;
    local_218 = *(undefined4 *)puVar3;
    uStack_214 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_210 = *(undefined4 *)(puVar3 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    puVar3 = (undefined8 *)&local_218;
  }
  FUN_140041b80(param_3,puVar3);
LAB_140091a4f:
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,0xe,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

