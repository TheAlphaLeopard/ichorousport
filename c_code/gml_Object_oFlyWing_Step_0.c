// gml_Object_oFlyWing_Step_0 @ 0x140ae0a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFlyWing_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe50;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_120 = "gml_Object_oFlyingPart_Step_0";
  local_118 = 0;
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_118 = 3;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar4);
  local_118 = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  FUN_140042560(&local_188,uVar3);
  FUN_1400460e0(uVar4,&local_188);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_118 = 7;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_19c = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_b8,uVar7,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_c8,uVar7,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_198 = (longlong *)local_b8;
  uStack_190 = uStack_b0;
  uStack_18c = uStack_ac;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_198);
  local_f0 = local_168;
  local_198 = (longlong *)local_c8;
  uStack_190 = uStack_c0;
  uStack_18c = uStack_bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_198);
  local_e8 = local_158;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000000000149;
  local_1a8 = (longlong *)0x100000000000149;
  uStack_1a0 = uStack_190;
  uStack_19c = 0xf;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1a8);
  local_e0 = local_148;
  ppuVar9 = &local_f0;
  uVar7 = CONCAT44(uVar8,DAT_141a12628);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_19c = 0;
    local_1a8 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar4,&local_1a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if (0 < iVar2) {
      local_118 = 9;
      FUN_140edd0e0(param_1,param_2,0,0);
    }
  }
  local_118 = 0xd;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_19c = 6;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_88,uVar7,uVar10);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  FUN_140042560(&local_188,uVar3);
  FUN_1400460e0(&local_88,&local_188);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_88);
  local_118 = 0xe;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_98,uVar7,uVar10);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  FUN_140042560(&local_188,uVar3);
  FUN_1400460e0(&local_98,&local_188);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  local_118 = 0x10;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_141a0a778,0x80000000,&local_a8,uVar7,uVar10);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_b8,uVar7,uVar10);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_c8,uVar7,uVar10);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fded8,0x80000000,&local_48,uVar7,uVar10);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fdd18,0x80000000,&local_58,uVar7,uVar10 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_198 = (longlong *)local_b8;
  uStack_190 = uStack_b0;
  uStack_18c = uStack_ac;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_198);
  local_f0 = local_168;
  local_198 = (longlong *)local_c8;
  uStack_190 = uStack_c0;
  uStack_18c = uStack_bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_198);
  local_e8 = local_158;
  local_198 = (longlong *)local_48;
  uStack_190 = uStack_40;
  uStack_18c = uStack_3c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_198);
  local_e0 = local_148;
  local_198 = (longlong *)local_58;
  uStack_190 = uStack_50;
  uStack_18c = uStack_4c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_198);
  local_d8 = local_138;
  ppuVar9 = &local_f0;
  uVar7 = CONCAT44(uVar8,DAT_1419fd548);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,4,uVar7,ppuVar9);
  local_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_180 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_188,puVar5);
  }
  uStack_18c = 7;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,5);
  FUN_140042560(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_19c = local_17c;
  uStack_1a0 = local_180;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_188;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_188);
  }
  FUN_140042560(&local_1a8,uVar3);
  FUN_1400460e0(&local_a8,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_a8);
  local_118 = 0x12;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
  uStack_18c = 0;
  local_198 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar4,&local_198,DAT_141955260,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar2 != 0) {
    local_118 = 0x14;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
    uStack_18c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_141a0f7f8,0x80000000,&local_68,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = (longlong *)local_68;
    uStack_190 = uStack_60;
    uStack_18c = uStack_5c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_198);
    local_f0 = local_168;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc70a4,_DAT_141dc70a0);
    uStack_190 = uRam0000000141dc70a8;
    uStack_18c = uRam0000000141dc70ac;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_198);
    local_e8 = local_158;
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar5);
    }
    FUN_140042560(&local_1a8,uVar3);
    local_198 = local_1a8;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_198);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_e0 = local_148;
    ppuVar9 = &local_f0;
    uVar7 = CONCAT44(uVar8,DAT_141a00c58);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,3,uVar7,ppuVar9);
    if (puVar5 != &local_100) {
      local_198 = (longlong *)*puVar5;
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_198);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_100);
    local_118 = 0x15;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
    uStack_18c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_141a0f938,0x80000000,&local_78,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = (longlong *)local_78;
    uStack_190 = uStack_70;
    uStack_18c = uStack_6c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_198);
    local_f0 = local_168;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc70a4,_DAT_141dc70a0);
    uStack_190 = uRam0000000141dc70a8;
    uStack_18c = uRam0000000141dc70ac;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_198);
    local_e8 = local_158;
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar5);
    }
    FUN_140042560(&local_1a8,uVar3);
    local_198 = local_1a8;
    uStack_190 = uStack_1a0;
    uStack_18c = uStack_19c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_198);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_e0 = local_148;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar8,DAT_141a00c58),&local_f0);
    if (puVar5 != &local_110) {
      local_198 = (longlong *)*puVar5;
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      FUN_140041b80(&local_110,&local_198);
    }
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_110);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return;
}

