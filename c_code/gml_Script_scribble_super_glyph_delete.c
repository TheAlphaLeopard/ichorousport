// gml_Script_scribble_super_glyph_delete @ 0x1404903f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_super_glyph_delete
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_b0 = "gml_Script___scribble_glyph_duplicate";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x59;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x5b;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1404904de:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_d8) goto LAB_1404904de;
  }
  local_48 = &local_d8;
  if (param_4 < 5) {
    puVar3 = &DAT_1419df7b0;
LAB_14049052b:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)param_5[4];
    if (puVar3 != &local_c8) goto LAB_14049052b;
  }
  local_40 = &local_c8;
  uVar5 = CONCAT44(uVar6,DAT_1419ff4f8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar5,&local_48);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != &local_a0) {
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_168);
  }
  local_a8 = 0x5c;
  iVar2 = FUN_140e851f0(&local_a0,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_a8 = 0x62;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if (param_4 < 3) {
      puVar3 = &DAT_1419df7b0;
LAB_140490859:
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar3 = (undefined8 *)param_5[2];
      if (puVar3 != &local_138) goto LAB_140490859;
    }
    local_78 = &local_138;
    if (param_4 < 5) {
      puVar3 = &DAT_1419df7b0;
LAB_1404908ab:
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_168);
    }
    else {
      puVar3 = (undefined8 *)param_5[4];
      if (puVar3 != &local_128) goto LAB_1404908ab;
    }
    local_70 = &local_128;
    uVar5 = CONCAT44(uVar6,DAT_1419ff4f8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar5,&local_78);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar3 != &local_148) {
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
    }
    local_a8 = 99;
    iVar2 = FUN_140e851f0(&local_148,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      local_a8 = 0x66;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      if (param_4 < 4) {
        puVar3 = &DAT_1419df7b0;
LAB_1404909ba:
        local_168 = *(undefined4 *)puVar3;
        uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_160 = *(undefined4 *)(puVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_168);
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
        if (puVar3 != &local_138) goto LAB_1404909ba;
      }
      local_78 = &local_138;
      uVar5 = CONCAT44(uVar6,DAT_141a064d8);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar5,&local_78);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar3 != &local_148) {
        local_168 = *(undefined4 *)puVar3;
        uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_160 = *(undefined4 *)(puVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_168);
      }
      local_a8 = 0x67;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      if (param_4 < 3) {
        puVar3 = &DAT_1419df7b0;
LAB_140490a9f:
        local_168 = *(undefined4 *)puVar3;
        uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_160 = *(undefined4 *)(puVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_168);
      }
      else {
        puVar3 = (undefined8 *)param_5[2];
        if (puVar3 != &local_138) goto LAB_140490a9f;
      }
      local_78 = &local_138;
      if (param_4 < 5) {
        puVar3 = &DAT_1419df7b0;
LAB_140490af1:
        local_168 = *(undefined4 *)puVar3;
        uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_160 = *(undefined4 *)(puVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_168);
      }
      else {
        puVar3 = (undefined8 *)param_5[4];
        if (puVar3 != &local_128) goto LAB_140490af1;
      }
      local_70 = &local_128;
      local_68 = &local_148;
      uVar5 = CONCAT44(uVar6,DAT_1419ff3d8);
      FUN_140e634e0(param_1,param_2,&local_158,3,uVar5,&local_78);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_a8 = 0x68;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      if (param_4 < 4) {
        puVar3 = &DAT_1419df7b0;
LAB_140490ba8:
        local_168 = *(undefined4 *)puVar3;
        uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_160 = *(undefined4 *)(puVar3 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_168);
      }
      else {
        puVar3 = (undefined8 *)param_5[3];
        if (puVar3 != &local_138) goto LAB_140490ba8;
      }
      local_78 = &local_138;
      uStack_2c = local_13c;
      uStack_30 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_38 = local_148;
      }
      else {
        FUN_1400419b0(&local_38,&local_148);
      }
      uStack_15c = 7;
      local_168 = 1;
      FUN_1400460e0(&local_38,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = (undefined4)local_38;
      uStack_164 = local_38._4_4_;
      uStack_160 = uStack_30;
      uStack_15c = uStack_2c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_168);
      if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_38);
      }
      local_70 = &local_128;
      local_168 = _DAT_1419e5f50;
      uStack_164 = uRam00000001419e5f54;
      uStack_160 = uRam00000001419e5f58;
      uStack_15c = uRam00000001419e5f5c;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
      local_68 = &local_118;
      uVar5 = CONCAT44(uVar6,DAT_141a09028);
      FUN_140e634e0(param_1,param_2,&local_158,3,uVar5,&local_78);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      local_a8 = 0x6c;
      if (param_4 < 6) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)param_5[5];
      }
      cVar1 = FUN_140e491e0(puVar3);
      if (cVar1 == '\0') {
        local_a8 = 0x6f;
        goto LAB_140490eef;
      }
    }
    local_a8 = 0x76;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if (param_4 < 4) {
      puVar3 = &DAT_1419df7b0;
LAB_140490d7b:
      local_168 = *(undefined4 *)puVar3;
      uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_160 = *(undefined4 *)(puVar3 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar3 = (undefined8 *)param_5[3];
      if (puVar3 != &local_138) goto LAB_140490d7b;
    }
    local_78 = &local_138;
    if ((param_4 < 2) || (puVar4 = (undefined8 *)param_5[1], puVar4 != &local_128)) {
      local_168 = *(undefined4 *)puVar4;
      uStack_164 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_160 = *(undefined4 *)(puVar4 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_168);
    }
    local_70 = &local_128;
    local_68 = &local_a0;
    local_168 = _DAT_141dc6670;
    uStack_164 = uRam0000000141dc6674;
    uStack_160 = uRam0000000141dc6678;
    uStack_15c = uRam0000000141dc667c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_60 = local_108;
    local_58 = &local_a0;
    local_168 = _DAT_1419e5f50;
    uStack_164 = uRam00000001419e5f54;
    uStack_160 = uRam00000001419e5f58;
    uStack_15c = uRam00000001419e5f5c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_168);
    local_50 = local_e8;
    local_48 = &local_148;
    local_168 = _DAT_141dc6670;
    uStack_164 = uRam0000000141dc6674;
    uStack_160 = uRam0000000141dc6678;
    uStack_15c = uRam0000000141dc667c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
    local_40 = &local_c8;
    FUN_140e634e0(param_1,param_2,&local_158,8,CONCAT44(uVar6,DAT_141a08ab8),&local_78);
    goto LAB_140490eef;
  }
  local_a8 = 0x5e;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_90 = 0;
  local_88 = 0;
  local_84 = 5;
  if (param_4 < 5) {
    puVar3 = &DAT_1419df7b0;
LAB_140490658:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_168);
  }
  else {
    puVar3 = (undefined8 *)param_5[4];
    if (puVar3 != &local_138) goto LAB_140490658;
  }
  local_78 = &local_138;
  local_168 = _DAT_141dd36a8;
  uStack_164 = uRam0000000141dd36ac;
  uStack_160 = uRam0000000141dd36b0;
  uStack_15c = DAT_141dd36b4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  local_70 = &local_128;
  if ((param_4 < 5) || (puVar4 = (undefined8 *)param_5[4], puVar4 != &local_118)) {
    local_168 = *(undefined4 *)puVar4;
    uStack_164 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_160 = *(undefined4 *)(puVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
  }
  local_68 = &local_118;
  local_168 = _DAT_141dd36b8;
  uStack_164 = uRam0000000141dd36bc;
  uStack_160 = uRam0000000141dd36c0;
  uStack_15c = DAT_141dd36c4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_168);
  local_60 = local_108;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_90,1,CONCAT44(uVar6,DAT_141a087b8),&local_78);
  if (puVar4 != &local_f8) {
    local_168 = *(undefined4 *)puVar4;
    uStack_164 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_160 = *(undefined4 *)(puVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_168);
  }
  local_58 = &local_f8;
  local_168 = _DAT_141dd3698;
  uStack_164 = uRam0000000141dd369c;
  uStack_160 = uRam0000000141dd36a0;
  uStack_15c = DAT_141dd36a4;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_168);
  local_50 = local_e8;
  gml_Script___scribble_error(param_1,param_2,&local_158,5,&local_70);
  local_a8 = 0x5f;
LAB_140490eef:
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

