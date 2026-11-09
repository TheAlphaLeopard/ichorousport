// gml_Script_anon_651_gml_Object_oPlayer_Other_10 @ 0x140c61d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_651_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
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
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_130 = "gml_Script_anon@82@gml_Object_oPlayer_Other_10";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 4;
  _eh_vector_constructor_iterator_(local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0;
  local_148 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
  local_1d8 = (longlong *)CONCAT44(uRam00000001419ecf74,_DAT_1419ecf70);
  uStack_1d0 = uRam00000001419ecf78;
  uStack_1cc = uRam00000001419ecf7c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1d8);
  local_88 = local_118;
  ppuVar8 = &local_88;
  uVar4 = FUN_140e63610(param_1,param_2,&local_148,1,uVar3,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') goto LAB_140c6269d;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uStack_1bc = 6;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar3,uVar9);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_141a101f8,0x80000000,&local_168,uVar3,uVar9 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar5);
  }
  uStack_1cc = 7;
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0x10);
  FUN_140042560(&local_1c8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_19c = uStack_1ac;
  uStack_1a0 = uStack_1b0;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_1b8;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_1b8);
  }
  FUN_1400460e0(&local_1a8,&local_1c8);
  local_1d8 = local_1a8;
  uStack_1d0 = uStack_1a0;
  uStack_1cc = uStack_19c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1d8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1d8 = (longlong *)local_168;
  uStack_1d0 = uStack_160;
  uStack_1cc = uStack_15c;
  local_80 = local_108;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1d8);
  local_78 = local_f8;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000149;
  local_1c8 = (longlong *)0x100000000000149;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1c8);
  local_70 = local_e8;
  ppuVar8 = &local_80;
  uVar3 = CONCAT44(uVar7,DAT_141a10408);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar3,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
    uStack_1cc = 6;
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar3 = uVar3 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar3,uVar9);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 6;
    uVar3 = uVar3 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_141a101f8,0x80000000,&local_168,uVar3,uVar9 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar3 >> 0x20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar5);
    }
    uStack_1cc = 7;
    local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,0x10);
    FUN_140042560(&local_1a8,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1bc = uStack_1ac;
    uStack_1c0 = uStack_1b0;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_1b8);
    }
    FUN_1400460e0(&local_1c8,&local_1a8);
    local_1d8 = local_1c8;
    uStack_1d0 = uStack_1c0;
    uStack_1cc = uStack_1bc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1d8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_68 = local_d8;
    local_1d8 = (longlong *)local_168;
    uStack_1d0 = uStack_160;
    uStack_1cc = uStack_15c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1d8);
    local_60 = local_c8;
    uStack_1cc = 0xf;
    local_1d8 = (longlong *)0x1000000000000ea;
    local_1c8 = (longlong *)0x1000000000000ea;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = 0xf;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1c8);
    local_58 = local_b8;
    ppuVar8 = &local_68;
    uVar3 = CONCAT44(uVar7,DAT_141a10408);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_188,3,uVar3,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') goto LAB_140c6269d;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x0;
    uVar2 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (0x7fffffff < uVar2) goto LAB_140c6269d;
  }
  local_128 = 6;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef9f8);
  uStack_1cc = 6;
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_1b8,uVar3,uVar9);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_158,uVar3,uVar9 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = local_1b8;
  uStack_1d0 = uStack_1b0;
  uStack_1cc = uStack_1ac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1d8);
  local_50 = local_a8;
  local_1d8 = (longlong *)local_158;
  uStack_1d0 = uStack_150;
  uStack_1cc = uStack_14c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1d8);
  local_48 = local_98;
  FUN_140e609c0(param_1);
  puVar6 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar7,DAT_1419fdca8),&local_50);
  if (puVar6 != puVar5) {
    local_1d8 = (longlong *)*puVar6;
    uStack_1d0 = *(undefined4 *)(puVar6 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1d8);
  }
  FUN_140e60910(1);
LAB_140c6269d:
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

