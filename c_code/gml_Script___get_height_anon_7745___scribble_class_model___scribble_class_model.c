// gml_Script___get_height_anon_7745___scribble_class_model___scribble_class_model @ 0x14014c7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___get_height_anon_7745___scribble_class_model___scribble_class_model
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 *local_d0;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_58 [12];
  byte local_4c;
  
  local_1a0 = 
  "gml_Script___get_bbox_revealed@anon@5540@__scribble_class_model@__scribble_class_model";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0xab;
  _eh_vector_constructor_iterator_(&local_c8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a069e8);
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0xaf;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ee8);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_198 = 0xaf;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1b8 = CONCAT44(uRam0000000141dcb8ac,_DAT_141dcb8a8);
    uStack_1b0 = uRam0000000141dcb8b0;
    uStack_1ac = DAT_141dcb8b4;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_1b8);
    local_d0 = local_58;
    FUN_1401ef7f0(param_1,param_2,&local_1c8,1,&local_d0);
  }
  local_198 = 0xb1;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06b88);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 == &local_c8) goto LAB_14014ca4d;
  }
  local_1b8 = *puVar7;
  uStack_1b0 = *(undefined4 *)(puVar7 + 1);
  uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1b8);
LAB_14014ca4d:
  local_108 = &local_c8;
  puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_1c8,1,uVar6,&local_108);
  uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar7 != &local_168) {
    local_1b8 = *puVar7;
    uStack_1b0 = *(undefined4 *)(puVar7 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
  }
  local_198 = 0xb3;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_180 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_188);
  }
  uStack_1ac = 7;
  local_1b8 = CONCAT44(local_1b8._4_4_,1);
  FUN_1400462a0(&local_188,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = local_188;
  uStack_1b0 = uStack_180;
  uStack_1ac = uStack_17c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1b8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_198 = 0xb4;
  if (param_4 < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[2];
  }
  uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_180 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = *puVar7;
  }
  else {
    FUN_1400419b0(&local_188);
  }
  uStack_1ac = 7;
  local_1b8 = CONCAT44(local_1b8._4_4_,1);
  FUN_1400462a0(&local_188,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = local_188;
  uStack_1b0 = uStack_180;
  uStack_1ac = uStack_17c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1b8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_198 = 0xb6;
  uStack_1ac = 0;
  local_1b8 = 0;
  iVar2 = FUN_140e851f0(&local_128,&local_1b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uVar3 = 1 << ((byte)local_1bc & 0x1f);
  if (iVar2 == -2 || -1 < iVar2) {
    local_198 = 0xbf;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_108 = &local_168;
    local_100 = &local_118;
    local_1b8 = CONCAT44(uRam00000001419e1e24,_DAT_1419e1e20);
    uStack_1b0 = uRam00000001419e1e28;
    uStack_1ac = uRam00000001419e1e2c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    local_f8 = (undefined8 *)local_a8;
    local_f0 = &local_128;
    local_1b8 = CONCAT44(uRam00000001419e1e24,_DAT_1419e1e20);
    uStack_1b0 = uRam00000001419e1e28;
    uStack_1ac = uRam00000001419e1e2c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
    local_e8 = (undefined8 *)local_88;
    uVar6 = CONCAT44(uVar9,DAT_141a069f8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,5,uVar6,&local_108);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar7 != &local_148) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1b8);
    }
    local_198 = 0xc0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_108 = &local_168;
    local_100 = &local_118;
    local_1b8 = CONCAT44(uRam00000001419e1e34,_DAT_1419e1e30);
    uStack_1b0 = uRam00000001419e1e38;
    uStack_1ac = uRam00000001419e1e3c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    local_f8 = (undefined8 *)local_a8;
    local_f0 = &local_128;
    local_1b8 = CONCAT44(uRam00000001419e1e34,_DAT_1419e1e30);
    uStack_1b0 = uRam00000001419e1e38;
    uStack_1ac = uRam00000001419e1e3c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
    local_e8 = (undefined8 *)local_88;
    uVar6 = CONCAT44(uVar9,DAT_141a069f8);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,5,uVar6,&local_108);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar7 != &local_138) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1b8);
    }
    local_198 = 0xc1;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_108 = &local_168;
    local_100 = &local_118;
    local_1b8 = CONCAT44(uRam00000001419e1e14,_DAT_1419e1e10);
    uStack_1b0 = uRam00000001419e1e18;
    uStack_1ac = uRam00000001419e1e1c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    local_f8 = (undefined8 *)local_a8;
    local_f0 = &local_128;
    local_1b8 = CONCAT44(uRam00000001419e1e14,_DAT_1419e1e10);
    uStack_1b0 = uRam00000001419e1e18;
    uStack_1ac = uRam00000001419e1e1c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
    local_e8 = (undefined8 *)local_88;
    uVar6 = CONCAT44(uVar9,DAT_141a06a78);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,5,uVar6,&local_108);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar7 != &local_158) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
    }
    local_198 = 0xc2;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_108 = &local_168;
    local_100 = &local_118;
    local_1b8 = CONCAT44(uRam00000001419e1e44,_DAT_1419e1e40);
    uStack_1b0 = uRam00000001419e1e48;
    uStack_1ac = uRam00000001419e1e4c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1b8);
    local_f8 = (undefined8 *)local_a8;
    local_f0 = &local_128;
    local_1b8 = CONCAT44(uRam00000001419e1e44,_DAT_1419e1e40);
    uStack_1b0 = uRam00000001419e1e48;
    uStack_1ac = uRam00000001419e1e4c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
    local_e8 = (undefined8 *)local_88;
    uVar6 = CONCAT44(uVar9,DAT_141a06a78);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,5,uVar6,&local_108);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar7 != &local_178) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1b8);
    }
  }
  else {
    local_198 = 0xb8;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar4 = FUN_140e4a740(&local_168);
    puVar7 = (undefined8 *)FUN_140ea8b20(&local_1c8,uVar4,0,1);
    if (puVar7 != &local_148) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1b8);
    }
    local_198 = 0xb9;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar4 = FUN_140e4a740(&local_168);
    puVar7 = (undefined8 *)FUN_140ea8b20(&local_1c8,uVar4,0,2);
    if (puVar7 != &local_138) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1b8);
    }
    local_198 = 0xba;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar4 = FUN_140e4a740(&local_168);
    puVar7 = (undefined8 *)FUN_140ea8b20(&local_1c8,uVar4,0,1);
    if (puVar7 != &local_158) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
    }
    local_198 = 0xbb;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar4 = FUN_140e4a740(&local_168);
    puVar7 = (undefined8 *)FUN_140ea8b20(&local_1c8,uVar4,0,4);
    if (puVar7 != &local_178) {
      local_1b8 = *puVar7;
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1b8);
    }
  }
  local_198 = 0xc5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05388);
  cVar1 = FUN_140e491e0(uVar6);
  local_198 = 0xc5;
  if (cVar1 == '\0') {
    if (param_4 < 4) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[3];
    }
    FUN_1400460e0(&local_158,puVar7);
  }
  else if (param_4 < 4) {
    FUN_1400462a0(&local_148,&DAT_1419df7b0);
  }
  else {
    FUN_1400462a0(&local_148,param_5[3]);
  }
  local_198 = 0xc6;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05b68);
  cVar1 = FUN_140e491e0(uVar6);
  local_198 = 0xc6;
  if (cVar1 == '\0') {
    if (param_4 < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[4];
    }
    FUN_1400460e0(&local_178,puVar7);
  }
  else if (param_4 < 5) {
    FUN_1400462a0(&local_138,&DAT_1419df7b0);
  }
  else {
    FUN_1400462a0(&local_138,param_5[4]);
  }
  local_198 = 199;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05dd8);
  cVar1 = FUN_140e491e0(uVar6);
  local_198 = 199;
  if (cVar1 == '\0') {
    if (param_4 < 6) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[5];
    }
    FUN_1400462a0(&local_148,puVar7);
  }
  else if (param_4 < 6) {
    FUN_1400460e0(&local_158,&DAT_1419df7b0);
  }
  else {
    FUN_1400460e0(&local_158,param_5[5]);
  }
  local_198 = 200;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04ec8);
  cVar1 = FUN_140e491e0(uVar6);
  local_198 = 200;
  if (cVar1 == '\0') {
    if (6 < param_4) {
      puVar8 = (undefined8 *)param_5[6];
    }
    FUN_1400462a0(&local_178,puVar8);
  }
  else {
    if (6 < param_4) {
      puVar8 = (undefined8 *)param_5[6];
    }
    FUN_1400460e0(&local_178,puVar8);
  }
  local_198 = 0xca;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1b8,
                gml_Script___get_width_anon_7630___scribble_class_model___scribble_class_model,0);
  if (&local_1b8 != puVar5) {
    local_188 = local_1b8;
    uStack_180 = uStack_1b0;
    uStack_17c = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  FUN_140e60910(1);
  if (puVar5 != &local_c8) {
    local_188 = *puVar5;
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_188);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_108 = &local_c8;
  local_100 = &local_148;
  local_f8 = &local_138;
  local_f0 = &local_158;
  local_e8 = &local_178;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1c8,5,CONCAT44(uVar9,DAT_1419fd6d8),&local_108);
  if (puVar5 != param_3) {
    local_1b8 = *puVar5;
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1b8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

