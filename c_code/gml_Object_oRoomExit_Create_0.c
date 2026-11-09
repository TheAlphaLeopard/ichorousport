// gml_Object_oRoomExit_Create_0 @ 0x140d3ff30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRoomExit_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffe60;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_130 = "gml_Object_oRoomDoorTop_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_128 = 3;
  FUN_140e98b30(param_1,param_2);
  local_128 = 5;
  uStack_17c = 6;
  in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419f61d8,0x80000000,&local_148,uVar6,in_stack_fffffffffffffe60);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  cVar1 = FUN_140e491e0(&local_148);
  if (cVar1 == '\0') {
    local_128 = 6;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd128);
    uStack_18c = 0xd;
    local_198 = (longlong *)0x0;
    if (&local_198 != puVar3) {
      local_188 = (longlong *)0x0;
      uStack_180 = uStack_190;
      uStack_17c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_188);
    }
  }
  local_128 = 8;
  uStack_17c = 6;
  ppuVar8 = (undefined1 **)(in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419f61d8,0x80000000,&local_148,uVar6,ppuVar8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  cVar1 = FUN_140e491e0(&local_148);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_17c = 6;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_158,uVar6,uVar9);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_17c = 6;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_178,uVar6,uVar9 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_198 = local_158;
    uStack_190 = uStack_150;
    uStack_18c = uStack_14c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_78 = local_e8;
    uStack_17c = local_16c;
    uStack_180 = local_170;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_188 = local_178;
    }
    else {
      FUN_1400419b0(&local_188,&local_178);
    }
    uStack_18c = 7;
    local_198 = (longlong *)CONCAT44(local_198._4_4_,8);
    FUN_1400462a0(&local_188,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = local_188;
    uStack_190 = uStack_180;
    uStack_18c = uStack_17c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_198);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_70 = local_d8;
    uStack_17c = uStack_14c;
    uStack_180 = uStack_150;
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_188 = local_158;
    }
    else {
      FUN_1400419b0(&local_188,&local_158);
    }
    uStack_18c = 7;
    local_198 = (longlong *)CONCAT44(local_198._4_4_,0x20);
    FUN_1400460e0(&local_188,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = local_188;
    uStack_190 = uStack_180;
    uStack_18c = uStack_17c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_198);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_17c = local_16c;
    uStack_180 = local_170;
    local_68 = local_c8;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_188 = local_178;
    }
    else {
      FUN_1400419b0(&local_188,&local_178);
    }
    uStack_18c = 7;
    local_198 = (longlong *)CONCAT44(local_198._4_4_,8);
    FUN_1400462a0(&local_188,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = local_188;
    uStack_190 = uStack_180;
    uStack_18c = uStack_17c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_198);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_60 = local_b8;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x1000000000000ee;
    local_188 = (longlong *)0x1000000000000ee;
    uStack_180 = uStack_190;
    uStack_17c = 0xf;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_188);
    local_58 = local_a8;
    local_198 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_190 = uRam00000001419df7c8;
    uStack_18c = uRam00000001419df7cc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_198);
    local_50 = local_98;
    local_198 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_190 = uRam00000001419df7c8;
    uStack_18c = uRam00000001419df7cc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_198);
    local_48 = local_88;
    ppuVar8 = &local_78;
    uVar6 = CONCAT44(uVar7,DAT_1419f60a8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_168,7,uVar6,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      uStack_18c = 0xf;
      local_198 = (longlong *)0x1000000000000ee;
      ppuVar8 = (undefined1 **)((ulonglong)ppuVar8 & 0xffffffffffffff00);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_198,DAT_141a1f500,0x80000000,&local_100,uVar6,ppuVar8);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_18c = 0;
      local_198 = (longlong *)0x0;
      iVar2 = FUN_140e851f0(&local_100,&local_198,DAT_141955260,1);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (iVar2 != -2 && iVar2 < 0) {
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fc9d8);
        uStack_18c = 6;
        ppuVar8 = (undefined1 **)((ulonglong)ppuVar8 & 0xffffffffffffff00);
        uVar6 = uVar6 & 0xffffffffffffff00;
        local_198 = param_1;
        FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_110,uVar6,ppuVar8);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        iVar2 = FUN_140e851f0(&local_110,uVar4,DAT_141955260,0);
        if (iVar2 == 0) {
          local_128 = 10;
          puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd128);
          uStack_18c = 0xd;
          local_198 = (longlong *)0x3ff0000000000000;
          if (&local_198 != puVar3) {
            local_188 = (longlong *)0x3ff0000000000000;
            uStack_180 = uStack_190;
            uStack_17c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar3);
            }
            FUN_140041b80(puVar3,&local_188);
          }
        }
      }
    }
  }
  local_128 = 0xe;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd128);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    uStack_18c = 6;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419f61d8,0x80000000,&local_148,uVar6,uVar9);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    cVar1 = FUN_140e491e0(&local_148);
    if (cVar1 != '\0') {
      local_128 = 0xf;
      uStack_18c = 0xf;
      local_198 = (longlong *)0x1000000000000ee;
      FUN_140e87440(&local_198,DAT_141a1f500,0x80000000,&local_120,uVar6 & 0xffffffffffffff00,
                    uVar9 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_18c = 0;
      local_198 = (longlong *)0x3fe999999999999a;
      FUN_1400462a0(&local_120,&local_198);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_18c = 0xf;
      local_198 = (longlong *)0x1000000000000ee;
      FUN_140e87930(&local_198,DAT_141a1f500,0x80000000,&local_120);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
    }
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

