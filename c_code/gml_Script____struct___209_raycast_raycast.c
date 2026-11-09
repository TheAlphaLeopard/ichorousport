// gml_Script____struct___209_raycast_raycast @ 0x14043c830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___209_raycast_raycast
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  byte local_20c;
  undefined8 local_208;
  byte local_1fc;
  undefined8 local_1f8;
  byte local_1ec;
  undefined8 local_1e8;
  byte local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  local_160 = "gml_Script_draw_texture_radial";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x14;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_238,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_25c = 0;
  local_268 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x15;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  uStack_23c = 0;
  local_248 = 0;
  iVar1 = FUN_140e851f0(puVar3,&local_248,DAT_141955260,1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    local_158 = 0x15;
    goto LAB_14043fd9a;
  }
  local_158 = 0x16;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  uStack_23c = 0;
  local_248 = 0x3ff0000000000000;
  uVar2 = FUN_140e851f0(puVar3,&local_248,DAT_141955260,1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (0x7fffffff < uVar2) {
    local_158 = 0x22;
    if (param_4 < 5) {
      puVar3 = &DAT_1419df7b0;
      if (param_4 < 3) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)param_5[2];
      }
    }
    else {
      puVar3 = (undefined8 *)param_5[4];
      puVar4 = (undefined8 *)param_5[2];
    }
    local_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_250 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_258 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_258);
    }
    FUN_1400460e0(&local_258,puVar3);
    uStack_16c = local_24c;
    uStack_170 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_178 = local_258;
    }
    else {
      FUN_1400419b0(&local_178,&local_258);
    }
    uStack_23c = 0;
    local_248 = 0x4000000000000000;
    FUN_140046500(&local_178,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_278 = local_178;
    uStack_270 = uStack_170;
    uStack_26c = uStack_16c;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_278);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_158 = 0x23;
    if (param_4 < 6) {
      puVar3 = &DAT_1419df7b0;
      if (param_4 < 4) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)param_5[3];
      }
    }
    else {
      puVar3 = (undefined8 *)param_5[5];
      puVar4 = (undefined8 *)param_5[3];
    }
    local_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_250 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_258 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_258);
    }
    FUN_1400460e0(&local_258,puVar3);
    uStack_16c = local_24c;
    uStack_170 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_178 = local_258;
    }
    else {
      FUN_1400419b0(&local_178,&local_258);
    }
    uStack_23c = 0;
    local_248 = 0x4000000000000000;
    FUN_140046500(&local_178,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_278 = local_178;
    uStack_270 = uStack_170;
    uStack_26c = uStack_16c;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_278);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_158 = 0x24;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_278 = CONCAT44(uRam00000001419e5cb4,_DAT_1419e5cb0);
    uStack_270 = uRam00000001419e5cb8;
    uStack_26c = uRam00000001419e5cbc;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_278);
    local_148 = &local_238;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_14043d718:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
    }
    else {
      puVar3 = (undefined8 *)*param_5;
      if (puVar3 != &local_228) goto LAB_14043d718;
    }
    local_140 = &local_228;
    uVar7 = CONCAT44(uVar8,DAT_1419f6e68);
    FUN_140e634e0(param_1,param_2,&local_268,2,uVar7,&local_148);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_158 = 0x25;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_148 = &local_b8;
    local_140 = &local_a8;
    local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
    uStack_270 = uRam00000001419e5cd8;
    uStack_26c = uRam00000001419e5cdc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_278);
    local_138 = &local_218;
    local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
    uStack_270 = uRam00000001419e5cd8;
    uStack_26c = uRam00000001419e5cdc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_278);
    local_130 = &local_208;
    if (param_4 < 7) {
      puVar3 = &DAT_1419df7b0;
LAB_14043d853:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[6];
      if (puVar3 != &local_1f8) goto LAB_14043d853;
    }
    local_128 = &local_1f8;
    if (param_4 < 8) {
      puVar3 = &DAT_1419df7b0;
LAB_14043d8a3:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[7];
      if (puVar3 != &local_1e8) goto LAB_14043d8a3;
    }
    local_120 = &local_1e8;
    uVar7 = CONCAT44(uVar8,DAT_1419f7068);
    FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_158 = 0x26;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_148 = &local_b8;
    if (param_4 < 4) {
      puVar3 = &DAT_1419df7b0;
LAB_14043d95a:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[3];
      if (puVar3 != &local_228) goto LAB_14043d95a;
    }
    local_140 = &local_228;
    local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
    uStack_270 = uRam00000001419e5cd8;
    uStack_26c = uRam00000001419e5cdc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_278);
    local_138 = &local_218;
    local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
    uStack_270 = uRam0000000141dc65c8;
    uStack_26c = uRam0000000141dc65cc;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_278);
    local_130 = &local_208;
    if (param_4 < 7) {
      puVar3 = &DAT_1419df7b0;
LAB_14043da19:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[6];
      if (puVar3 != &local_1f8) goto LAB_14043da19;
    }
    local_128 = &local_1f8;
    if (param_4 < 8) {
      puVar3 = &DAT_1419df7b0;
LAB_14043da69:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[7];
      if (puVar3 != &local_1e8) goto LAB_14043da69;
    }
    local_120 = &local_1e8;
    uVar7 = CONCAT44(uVar8,DAT_1419f7068);
    FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_158 = 0x28;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    uStack_23c = 0;
    local_248 = 0x3fc0000000000000;
    uVar2 = FUN_140e851f0(puVar3,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar2 < 0x80000000) {
      local_158 = 0x29;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 5) {
        puVar3 = &DAT_1419df7b0;
LAB_14043db8a:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[4];
        if (puVar3 != &local_238) goto LAB_14043db8a;
      }
      local_148 = &local_238;
      if (param_4 < 4) {
        puVar3 = &DAT_1419df7b0;
LAB_14043dbdb:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
        if (puVar3 != &local_228) goto LAB_14043dbdb;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043dc9a:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043dc9a;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043dcea:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043dcea;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x2a;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_148 = &local_b8;
      local_140 = &local_a8;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043de25:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043de25;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043de75:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043de75;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x2b;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 5) {
        puVar3 = &DAT_1419df7b0;
LAB_14043df22:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[4];
        if (puVar3 != &local_238) goto LAB_14043df22;
      }
      local_148 = &local_238;
      if (param_4 < 4) {
        puVar3 = &DAT_1419df7b0;
LAB_14043df73:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
        if (puVar3 != &local_228) goto LAB_14043df73;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e032:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043e032;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e082:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043e082;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    local_158 = 0x2d;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    uStack_23c = 0;
    local_248 = 0x3fd8000000000000;
    uVar2 = FUN_140e851f0(puVar3,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar2 < 0x80000000) {
      local_158 = 0x2e;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 5) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e1a3:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[4];
        if (puVar3 != &local_238) goto LAB_14043e1a3;
      }
      local_148 = &local_238;
      if (param_4 < 6) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e1f4:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[5];
        if (puVar3 != &local_228) goto LAB_14043e1f4;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e2b3:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043e2b3;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e303:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043e303;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x2f;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_148 = &local_b8;
      local_140 = &local_a8;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e43e:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043e43e;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e48e:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043e48e;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x30;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 5) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e53b:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[4];
        if (puVar3 != &local_238) goto LAB_14043e53b;
      }
      local_148 = &local_238;
      if (param_4 < 6) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e58c:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[5];
        if (puVar3 != &local_228) goto LAB_14043e58c;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e64b:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043e64b;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e69b:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043e69b;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    local_158 = 0x32;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    uStack_23c = 0;
    local_248 = 0x3fe4000000000000;
    uVar2 = FUN_140e851f0(puVar3,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar2 < 0x80000000) {
      local_158 = 0x33;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e7bc:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_238) goto LAB_14043e7bc;
      }
      local_148 = &local_238;
      if (param_4 < 6) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e80d:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[5];
        if (puVar3 != &local_228) goto LAB_14043e80d;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e8cc:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043e8cc;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043e91c:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043e91c;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x34;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_148 = &local_b8;
      local_140 = &local_a8;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043ea57:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043ea57;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043eaa7:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043eaa7;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x35;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_14043eb54:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_238) goto LAB_14043eb54;
      }
      local_148 = &local_238;
      if (param_4 < 6) {
        puVar3 = &DAT_1419df7b0;
LAB_14043eba5:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[5];
        if (puVar3 != &local_228) goto LAB_14043eba5;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
      uStack_270 = uRam00000001419e5cc8;
      uStack_26c = uRam00000001419e5ccc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043ec64:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043ec64;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043ecb4:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043ecb4;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    local_158 = 0x37;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    uStack_23c = 0;
    local_248 = 0x3fec000000000000;
    uVar2 = FUN_140e851f0(puVar3,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar2 < 0x80000000) {
      local_158 = 0x38;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_14043edd5:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_238) goto LAB_14043edd5;
      }
      local_148 = &local_238;
      if (param_4 < 4) {
        puVar3 = &DAT_1419df7b0;
LAB_14043ee26:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
        if (puVar3 != &local_228) goto LAB_14043ee26;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043eee5:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043eee5;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043ef35:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043ef35;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x39;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      local_148 = &local_b8;
      local_140 = &local_a8;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam00000001419e5cd4,_DAT_1419e5cd0);
      uStack_270 = uRam00000001419e5cd8;
      uStack_26c = uRam00000001419e5cdc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043f070:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043f070;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043f0c0:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043f0c0;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_158 = 0x3a;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_14043f16d:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_238) goto LAB_14043f16d;
      }
      local_148 = &local_238;
      if (param_4 < 4) {
        puVar3 = &DAT_1419df7b0;
LAB_14043f1be:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
        if (puVar3 != &local_228) goto LAB_14043f1be;
      }
      local_140 = &local_228;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_278);
      local_138 = &local_218;
      local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
      uStack_270 = uRam0000000141dc65c8;
      uStack_26c = uRam0000000141dc65cc;
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
      local_130 = &local_208;
      if (param_4 < 7) {
        puVar3 = &DAT_1419df7b0;
LAB_14043f27d:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[6];
        if (puVar3 != &local_1f8) goto LAB_14043f27d;
      }
      local_128 = &local_1f8;
      if (param_4 < 8) {
        puVar3 = &DAT_1419df7b0;
LAB_14043f2cd:
        local_278 = *puVar3;
        uStack_270 = *(undefined4 *)(puVar3 + 1);
        uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_278);
      }
      else {
        puVar3 = (undefined8 *)param_5[7];
        if (puVar3 != &local_1e8) goto LAB_14043f2cd;
      }
      local_120 = &local_1e8;
      uVar7 = CONCAT44(uVar8,DAT_1419f7068);
      FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    local_158 = 0x3d;
    if (param_4 < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)param_5[1];
    }
    local_24c = *(undefined4 *)((longlong)puVar3 + 0xc);
    local_250 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_258 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_258);
    }
    uStack_26c = 7;
    local_278 = CONCAT44(local_278._4_4_,2);
    FUN_140042560(&local_258,&local_278);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    uStack_16c = local_24c;
    uStack_170 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_178 = local_258;
    }
    else {
      FUN_1400419b0(&local_178,&local_258);
    }
    uStack_26c = 0;
    local_278 = 0x3fe0000000000000;
    FUN_1400462a0(&local_178,&local_278);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    uStack_23c = 0;
    local_248 = 0x400921fb54442d18;
    FUN_140042560(&local_248,&local_178);
    local_278 = local_248;
    uStack_270 = uStack_240;
    uStack_26c = uStack_23c;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_278);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_158 = 0x3e;
    if ((local_bc & 0xffffff) == 0) {
      uVar6 = (undefined4)local_c8;
    }
    else {
      uVar6 = FUN_140e4b060(&local_c8);
    }
    uVar7 = thunk_FUN_1412aae80(uVar6);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_158 = 0x3f;
    local_d8 = uVar7;
    if ((local_bc & 0xffffff) == 0) {
      uVar6 = (undefined4)local_c8;
    }
    else {
      uVar6 = FUN_140e4b060(&local_c8);
    }
    uVar7 = thunk_FUN_1412ac390(uVar6);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_158 = 0x40;
    local_e8 = uVar7;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((local_cc & 0xffffff) == 0) {
      uVar6 = (undefined4)local_d8;
    }
    else {
      uVar6 = FUN_140e4b060(&local_d8);
    }
    local_238 = FUN_140e78d00(uVar6);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_22c = 0;
    local_148 = &local_238;
    if ((local_dc & 0xffffff) == 0) {
      uVar6 = (undefined4)local_e8;
    }
    else {
      uVar6 = FUN_140e4b060(&local_e8);
    }
    local_228 = FUN_140e78d00(uVar6);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_21c = 0;
    local_140 = &local_228;
    puVar3 = (undefined8 *)FUN_140e79090(&local_268,2,&local_148);
    if (puVar3 != &local_98) {
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_278);
    }
    local_158 = 0x41;
    uStack_26c = 0;
    local_278 = 0x3ff0000000000000;
    iVar1 = FUN_140e851f0(&local_98,&local_278,DAT_141955260,1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (iVar1 != -2 && iVar1 < 0) {
      local_158 = 0x42;
      FUN_140046500(&local_d8,&local_98);
      local_158 = 0x43;
      FUN_140046500(&local_e8,&local_98);
    }
    local_158 = 0x45;
    local_24c = 0;
    local_258 = 0x3ff0000000000000;
    FUN_1400460e0(&local_258,&local_d8);
    uStack_16c = local_24c;
    uStack_170 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_178 = local_258;
    }
    else {
      FUN_1400419b0(&local_178,&local_258);
    }
    uStack_26c = 0;
    local_278 = 0x4000000000000000;
    FUN_140046500(&local_178,&local_278);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = local_178;
    uStack_270 = uStack_170;
    uStack_26c = uStack_16c;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_278);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_158 = 0x46;
    local_24c = 0;
    local_258 = 0x3ff0000000000000;
    FUN_1400460e0(&local_258,&local_e8);
    uStack_16c = local_24c;
    uStack_170 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_178 = local_258;
    }
    else {
      FUN_1400419b0(&local_178,&local_258);
    }
    uStack_26c = 0;
    local_278 = 0x4000000000000000;
    FUN_140046500(&local_178,&local_278);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = local_178;
    uStack_270 = uStack_170;
    uStack_26c = uStack_16c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_278);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_158 = 0x47;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if (param_4 < 3) {
      puVar3 = &DAT_1419df7b0;
LAB_14043fa41:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[2];
      if (puVar3 != &local_238) goto LAB_14043fa41;
    }
    local_148 = &local_238;
    if (param_4 < 5) {
      puVar3 = &DAT_1419df7b0;
LAB_14043fa92:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[4];
      if (puVar3 != &local_228) goto LAB_14043fa92;
    }
    local_140 = &local_228;
    local_138 = &local_d8;
    if (param_4 < 4) {
      puVar3 = &DAT_1419df7b0;
LAB_14043faea:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[3];
      if (puVar3 != &local_208) goto LAB_14043faea;
    }
    local_130 = &local_208;
    if (param_4 < 6) {
      puVar3 = &DAT_1419df7b0;
LAB_14043fb37:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[5];
      if (puVar3 != &local_1f8) goto LAB_14043fb37;
    }
    local_128 = &local_1f8;
    local_120 = &local_e8;
    uVar7 = CONCAT44(uVar8,DAT_141a00c58);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_78,3,uVar7,&local_148);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar3 != &local_1d8) {
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_278);
    }
    local_118 = &local_1d8;
    uVar7 = CONCAT44(uVar8,DAT_141a00c58);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_88,3,uVar7,&local_130);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar3 != &local_1c8) {
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_278);
    }
    local_110 = &local_1c8;
    local_108 = &local_d8;
    local_100 = &local_e8;
    if (param_4 < 7) {
      puVar3 = &DAT_1419df7b0;
LAB_14043fc90:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[6];
      if (puVar3 != &local_198) goto LAB_14043fc90;
    }
    local_f8 = &local_198;
    if ((param_4 < 8) || (puVar5 = (undefined8 *)param_5[7], puVar5 != &local_188)) {
      local_278 = *puVar5;
      uStack_270 = *(undefined4 *)(puVar5 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_278);
    }
    local_f0 = &local_188;
    uVar7 = CONCAT44(uVar8,DAT_1419f7068);
    FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_118);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_158 = 0x4b;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    FUN_140e634e0(param_1,param_2,&local_268,0,CONCAT44(uVar8,DAT_1419f6df8),0);
    goto LAB_14043fd9a;
  }
  local_158 = 0x17;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_278 = CONCAT44(uRam00000001419e5cb4,_DAT_1419e5cb0);
  uStack_270 = uRam00000001419e5cb8;
  uStack_26c = uRam00000001419e5cbc;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_278);
  local_148 = &local_238;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14043cadd:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_278);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_228) goto LAB_14043cadd;
  }
  local_140 = &local_228;
  uVar7 = CONCAT44(uVar8,DAT_1419f6e68);
  iVar1 = 2;
  FUN_140e634e0(param_1,param_2,&local_268,2,uVar7,&local_148);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_158 = 0x18;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if (param_4 < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_14043cb90:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[2];
    if (puVar3 != &local_238) goto LAB_14043cb90;
  }
  local_148 = &local_238;
  if (param_4 < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_14043cbe1:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[3];
    if (puVar3 != &local_228) goto LAB_14043cbe1;
  }
  local_140 = &local_228;
  local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
  uStack_270 = uRam0000000141dc65c8;
  uStack_26c = uRam0000000141dc65cc;
  if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_278);
  local_138 = &local_218;
  local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
  uStack_270 = uRam0000000141dc65c8;
  uStack_26c = uRam0000000141dc65cc;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_278);
  local_130 = &local_208;
  if (param_4 < 7) {
    puVar3 = &DAT_1419df7b0;
LAB_14043cca0:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[6];
    if (puVar3 != &local_1f8) goto LAB_14043cca0;
  }
  local_128 = &local_1f8;
  if (param_4 < 8) {
    puVar3 = &DAT_1419df7b0;
LAB_14043ccf0:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[7];
    if (puVar3 != &local_1e8) goto LAB_14043ccf0;
  }
  local_120 = &local_1e8;
  uVar7 = CONCAT44(uVar8,DAT_1419f7068);
  FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
  do {
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar1 = iVar1 + -1;
    local_158 = 0x1a;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if (param_4 < 5) {
      puVar3 = &DAT_1419df7b0;
LAB_14043cda0:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[4];
      if (puVar3 != &local_238) goto LAB_14043cda0;
    }
    local_148 = &local_238;
    if (param_4 < 4) {
      puVar3 = &DAT_1419df7b0;
LAB_14043cdf1:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[3];
      if (puVar3 != &local_228) goto LAB_14043cdf1;
    }
    local_140 = &local_228;
    local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
    uStack_270 = uRam00000001419e5cc8;
    uStack_26c = uRam00000001419e5ccc;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_278);
    local_138 = &local_218;
    local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
    uStack_270 = uRam0000000141dc65c8;
    uStack_26c = uRam0000000141dc65cc;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_278);
    local_130 = &local_208;
    if (param_4 < 7) {
      puVar3 = &DAT_1419df7b0;
LAB_14043ceb0:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[6];
      if (puVar3 != &local_1f8) goto LAB_14043ceb0;
    }
    local_128 = &local_1f8;
    if (param_4 < 8) {
      puVar3 = &DAT_1419df7b0;
LAB_14043cf00:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[7];
      if (puVar3 != &local_1e8) goto LAB_14043cf00;
    }
    local_120 = &local_1e8;
    uVar7 = CONCAT44(uVar8,DAT_1419f7068);
    FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_158 = 0x1b;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    if (param_4 < 3) {
      puVar3 = &DAT_1419df7b0;
LAB_14043cfad:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[2];
      if (puVar3 != &local_238) goto LAB_14043cfad;
    }
    local_148 = &local_238;
    if (param_4 < 6) {
      puVar3 = &DAT_1419df7b0;
LAB_14043cffe:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[5];
      if (puVar3 != &local_228) goto LAB_14043cffe;
    }
    local_140 = &local_228;
    local_278 = CONCAT44(uRam0000000141dc65c4,_DAT_141dc65c0);
    uStack_270 = uRam0000000141dc65c8;
    uStack_26c = uRam0000000141dc65cc;
    if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_278);
    local_138 = &local_218;
    local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
    uStack_270 = uRam00000001419e5cc8;
    uStack_26c = uRam00000001419e5ccc;
    if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_278);
    local_130 = &local_208;
    if (param_4 < 7) {
      puVar3 = &DAT_1419df7b0;
LAB_14043d0bd:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[6];
      if (puVar3 != &local_1f8) goto LAB_14043d0bd;
    }
    local_128 = &local_1f8;
    if (param_4 < 8) {
      puVar3 = &DAT_1419df7b0;
LAB_14043d10d:
      local_278 = *puVar3;
      uStack_270 = *(undefined4 *)(puVar3 + 1);
      uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_278);
    }
    else {
      puVar3 = (undefined8 *)param_5[7];
      if (puVar3 != &local_1e8) goto LAB_14043d10d;
    }
    local_120 = &local_1e8;
    uVar7 = CONCAT44(uVar8,DAT_1419f7068);
    FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  } while (0 < iVar1);
  local_158 = 0x1d;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if (param_4 < 5) {
    puVar3 = &DAT_1419df7b0;
LAB_14043d1c5:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[4];
    if (puVar3 != &local_238) goto LAB_14043d1c5;
  }
  local_148 = &local_238;
  if (param_4 < 6) {
    puVar3 = &DAT_1419df7b0;
LAB_14043d216:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[5];
    if (puVar3 != &local_228) goto LAB_14043d216;
  }
  local_140 = &local_228;
  local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
  uStack_270 = uRam00000001419e5cc8;
  uStack_26c = uRam00000001419e5ccc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140041b80(&local_218,&local_278);
  local_138 = &local_218;
  local_278 = CONCAT44(uRam00000001419e5cc4,_DAT_1419e5cc0);
  uStack_270 = uRam00000001419e5cc8;
  uStack_26c = uRam00000001419e5ccc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_278);
  local_130 = &local_208;
  if (param_4 < 7) {
    puVar3 = &DAT_1419df7b0;
LAB_14043d2d5:
    local_278 = *puVar3;
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_278);
  }
  else {
    puVar3 = (undefined8 *)param_5[6];
    if (puVar3 != &local_1f8) goto LAB_14043d2d5;
  }
  local_128 = &local_1f8;
  if ((param_4 < 8) || (puVar5 = (undefined8 *)param_5[7], puVar5 != &local_1e8)) {
    local_278 = *puVar5;
    uStack_270 = *(undefined4 *)(puVar5 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_278);
  }
  local_120 = &local_1e8;
  uVar7 = CONCAT44(uVar8,DAT_1419f7068);
  FUN_140e634e0(param_1,param_2,&local_268,6,uVar7,&local_148);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_158 = 0x1e;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  FUN_140e634e0(param_1,param_2,&local_268,0,CONCAT44(uVar8,DAT_1419f6df8),0);
  local_158 = 0x1f;
LAB_14043fd9a:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_238,0x10,0xc,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

