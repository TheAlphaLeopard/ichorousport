// gml_Script_InputOpposingRepeat @ 0x140340fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputOpposingRepeat
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  byte local_res20;
  undefined4 uVar11;
  undefined8 uVar10;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined4 local_118 [3];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined4 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60 [2];
  undefined8 *local_58;
  
  local_f0 = "gml_Script_InputOpposingPressed";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xd;
  FUN_140041df0(local_60,param_4,4,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0;
  local_168 = 0;
  local_res20 = 0;
  local_64 = 0;
  local_70 = 0;
  local_74 = 0;
  local_80 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xd;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_60[0];
  if ((int)local_60[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[2];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_e8 = 0xd;
    if ((int)local_60[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_58[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if ((int)local_60[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[3];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_cc = 0xd;
    local_d8 = 0x3ff0000000000000;
    if ((int)local_60[0] < 4) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_58[3];
      if (&local_d8 == puVar6) goto LAB_1403411a7;
    }
    local_178 = 0;
    uStack_174 = 0x3ff00000;
    uStack_170 = uStack_d0;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_178);
  }
LAB_1403411a7:
  local_e8 = 4;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_60[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_1403411f5:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    puVar6 = (undefined8 *)local_58[2];
    if (puVar6 != &local_148) goto LAB_1403411f5;
  }
  local_c8 = &local_148;
  uVar10 = CONCAT44(uVar11,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar10,&local_c8);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_e8 = 5;
    local_70 = 0;
    local_68 = 0;
    local_64 = 5;
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    local_80 = 0;
    local_78 = 0;
    local_74 = 5;
    if ((int)local_60[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_1403412bf:
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_58[2];
      if (puVar6 != &local_138) goto LAB_1403412bf;
    }
    local_c0 = &local_138;
    local_178 = _DAT_141dd0998;
    uStack_174 = uRam0000000141dd099c;
    uStack_170 = uRam0000000141dd09a0;
    uStack_16c = DAT_141dd09a4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_b8 = local_128;
    puVar5 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_80,1,CONCAT44(uVar11,DAT_1419fdc58),&local_c0);
    if (puVar5 != local_118) {
      local_178 = *puVar5;
      uStack_174 = puVar5[1];
      uStack_170 = puVar5[2];
      uStack_16c = puVar5[3];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_178);
    }
    local_b0 = local_118;
    local_178 = _DAT_141dd09e8;
    uStack_174 = uRam0000000141dd09ec;
    uStack_170 = uRam0000000141dd09f0;
    uStack_16c = DAT_141dd09f4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_a8 = local_108;
    FUN_14008e020(param_1,param_2,&local_70,3,&local_b8);
    local_res20 = (byte)local_64;
  }
  local_e8 = 8;
  if ((int)local_60[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[2];
  }
  uStack_cc = 0;
  local_d8 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar6,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (uVar3 < 0x80000000) {
    local_e8 = 0xb;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = _DAT_141dd09c8;
    uStack_174 = uRam0000000141dd09cc;
    uStack_170 = uRam0000000141dd09d0;
    uStack_16c = DAT_141dd09d4;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_c8 = &local_148;
    if ((int)local_60[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_1403414f3:
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_58[2];
      if (puVar6 != &local_138) goto LAB_1403414f3;
    }
    local_c0 = &local_138;
    local_178 = _DAT_141dd09d8;
    uStack_174 = uRam0000000141dd09dc;
    uStack_170 = uRam0000000141dd09e0;
    uStack_16c = DAT_141dd09e4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_b8 = local_128;
    local_178 = _DAT_1419e41b0;
    uStack_174 = uRam00000001419e41b4;
    uStack_170 = uRam00000001419e41b8;
    uStack_16c = uRam00000001419e41bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_178);
    local_b0 = local_118;
    local_178 = _DAT_141dd09b8;
    uStack_174 = uRam0000000141dd09bc;
    uStack_170 = uRam0000000141dd09c0;
    uStack_16c = DAT_141dd09c4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_a8 = local_108;
    FUN_14008e020(param_1,param_2,&local_168,5,&local_c8);
  }
  local_e8 = 0x11;
  if ((int)local_60[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[2];
  }
  uStack_cc = 0;
  local_d8 = 0;
  iVar2 = FUN_140e851f0(puVar6,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_e8 = 0x14;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = _DAT_141dd09c8;
    uStack_174 = uRam0000000141dd09cc;
    uStack_170 = uRam0000000141dd09d0;
    uStack_16c = DAT_141dd09d4;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_c8 = &local_148;
    if ((int)local_60[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_1403416f6:
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_58[2];
      if (puVar6 != &local_138) goto LAB_1403416f6;
    }
    local_c0 = &local_138;
    local_178 = _DAT_141dd09a8;
    uStack_174 = uRam0000000141dd09ac;
    uStack_170 = uRam0000000141dd09b0;
    uStack_16c = DAT_141dd09b4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_b8 = local_128;
    FUN_14008e020(param_1,param_2,&local_168,3,&local_c8);
  }
  local_e8 = 0x11;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_60[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1403417db:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    puVar6 = (undefined8 *)*local_58;
    if (puVar6 != &local_148) goto LAB_1403417db;
  }
  local_c8 = &local_148;
  if ((int)local_60[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_14034182f:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    puVar6 = (undefined8 *)local_58[2];
    if (puVar6 != &local_138) goto LAB_14034182f;
  }
  local_c0 = &local_138;
  puVar6 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_168,2,&local_c8);
  if (puVar6 != &local_90) {
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_178);
  }
  local_e8 = 0x12;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_60[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_14034190f:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    puVar6 = (undefined8 *)local_58[1];
    if (puVar6 != &local_148) goto LAB_14034190f;
  }
  local_c8 = &local_148;
  if ((int)local_60[0] < 3) {
    puVar6 = &DAT_1419df7b0;
LAB_140341963:
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    puVar6 = (undefined8 *)local_58[2];
    if (puVar6 != &local_138) goto LAB_140341963;
  }
  local_c0 = &local_138;
  puVar6 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_168,2,&local_c8);
  if (puVar6 != &local_a0) {
    local_178 = *(undefined4 *)puVar6;
    uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_178);
  }
  local_e8 = 0x14;
  if ((int)local_60[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_58[3];
  }
  cVar1 = FUN_140e491e0(puVar6);
  if (cVar1 != '\0') {
    local_e8 = 0x16;
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_14c = 0;
    local_158 = 0.0;
    local_e8 = 0x18;
    cVar1 = FUN_140e491e0(&local_a0);
    if (cVar1 != '\0') {
      local_e8 = 0x18;
      uVar3 = uStack_14c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_158 = (double)CONCAT44(local_158._4_4_,(int)local_158 + 1);
          }
          else if (uVar3 == 10) {
            local_158 = (double)((longlong)local_158 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              uStack_14c = 0;
              goto LAB_140341aae;
            }
            FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
          }
          goto LAB_140341ab8;
        }
        local_158 = (double)FUN_140e4b060(&local_158);
        uStack_14c = 0;
      }
LAB_140341aae:
      local_158 = local_158 + 1.0;
    }
LAB_140341ab8:
    local_e8 = 0x19;
    cVar1 = FUN_140e491e0(&local_90);
    if (cVar1 != '\0') {
      local_e8 = 0x19;
      uVar3 = uStack_14c & 0xffffff;
      if (uVar3 == 0) {
LAB_140341b3e:
        local_158 = local_158 + -1.0;
      }
      else if (uVar3 == 1) {
        local_158 = (double)FUN_140e4b060(&local_158);
        local_158 = local_158 - 1.0;
        uStack_14c = 0;
      }
      else if (uVar3 == 7) {
        local_158 = (double)CONCAT44(local_158._4_4_,(int)local_158 + -1);
      }
      else if (uVar3 == 10) {
        local_158 = (double)((longlong)local_158 + -1);
      }
      else {
        if (uVar3 == 0xd) {
          uStack_14c = 0;
          goto LAB_140341b3e;
        }
        FUN_140042910(&DAT_14172c450,&local_158,&local_158);
      }
    }
    local_e8 = 0x1b;
    if (&local_158 != param_3) {
      local_178 = (int)local_158;
      uStack_174 = local_158._4_4_;
      uStack_170 = uStack_150;
      uStack_16c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_178);
    }
    goto LAB_140341b98;
  }
  local_e8 = 0x1f;
  cVar1 = FUN_140e491e0(&local_90);
  if ((cVar1 == '\0') && (cVar1 = FUN_140e491e0(&local_a0), cVar1 == '\0')) {
    local_e8 = 0x1f;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
    goto LAB_140341b98;
  }
  local_e8 = 0x21;
  cVar1 = FUN_140e491e0(&local_a0);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((int)local_60[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140341db9:
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    else {
      puVar6 = (undefined8 *)*local_58;
      if (puVar6 != &local_148) goto LAB_140341db9;
    }
    local_c8 = &local_148;
    if ((int)local_60[0] < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140341e0d:
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_58[2];
      if (puVar6 != &local_138) goto LAB_140341e0d;
    }
    local_c0 = &local_138;
    uVar4 = gml_Script_InputCheckMany(param_1,param_2,&local_168,2,&local_c8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_e8 = 0x21;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      *param_3 = 0x3ff0000000000000;
      goto LAB_140341b98;
    }
  }
  local_e8 = 0x22;
  bVar9 = false;
  cVar1 = FUN_140e491e0(&local_90);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((int)local_60[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140341f0c:
      local_178 = *(undefined4 *)puVar6;
      uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(uint *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    else {
      puVar6 = (undefined8 *)local_58[1];
      if (puVar6 != &local_148) goto LAB_140341f0c;
    }
    local_c8 = &local_148;
    if (((int)local_60[0] < 3) || (puVar8 = (undefined8 *)local_58[2], puVar8 != &local_138)) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(uint *)((longlong)puVar8 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    local_c0 = &local_138;
    uVar4 = gml_Script_InputCheckMany(param_1,param_2,&local_168,2,&local_c8);
    cVar1 = FUN_140e491e0(uVar4);
    bVar9 = cVar1 == '\0';
  }
  uVar3 = 1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f);
  if (bVar9) {
    local_e8 = 0x22;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
  }
  else {
    local_e8 = 0x24;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
  }
LAB_140341b98:
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_60[0]) {
    puVar8 = local_58;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_58);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

