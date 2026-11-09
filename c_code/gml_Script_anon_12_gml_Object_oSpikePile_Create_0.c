// gml_Script_anon_12_gml_Object_oSpikePile_Create_0 @ 0x140d98d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_12_gml_Object_oSpikePile_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  code *pcVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe50;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  double local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  double local_120;
  uint local_114;
  double local_110;
  uint local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  double local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  double *local_70;
  undefined1 *local_68;
  
  local_130 = "gml_Object_oSpikedRock_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0.0;
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_128 = 2;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_19c = 0;
  local_1a8 = (longlong *)0x3fc999999999999a;
  FUN_140042560(&local_1a8,uVar2);
  FUN_1400460e0(uVar3,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_128 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_19c = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_f0,uVar6,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_190 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_198,puVar4);
  }
  FUN_140042560(&local_198,uVar2);
  FUN_1400460e0(&local_f0,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_f0);
  local_128 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_19c = 6;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_100,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_18c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_190 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_198,puVar4);
  }
  FUN_140042560(&local_198,uVar2);
  FUN_1400460e0(&local_100,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_100);
  local_128 = 7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  uStack_18c = 0;
  local_198 = (longlong *)0x4020000000000000;
  FUN_140042560(&local_198,uVar3);
  uStack_19c = uStack_18c;
  uStack_1a0 = uStack_190;
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_198);
  }
  FUN_140042560(&local_1a8,uVar2);
  FUN_1400460e0(uVar5,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_128 = 9;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  uVar14 = 0;
  FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
  local_128 = 0xb;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uStack_19c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_158,uVar6,uVar14);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_19c = 6;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_168,uVar6,uVar14 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar6 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = (longlong *)local_158;
  uStack_1a0 = uStack_150;
  uStack_19c = uStack_14c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1a8);
  local_1a8 = (longlong *)local_168;
  uStack_1a0 = uStack_160;
  uStack_19c = uStack_15c;
  local_88 = local_d8;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1a8);
  local_80 = local_c8;
  uStack_19c = 0xf;
  local_1a8 = (longlong *)0x100000000000149;
  local_198 = (longlong *)0x100000000000149;
  uStack_190 = uStack_1a0;
  uStack_18c = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_198);
  local_78 = local_b8;
  ppuVar15 = &local_88;
  uVar6 = CONCAT44(uVar13,DAT_141a12628);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_188,3,uVar6,ppuVar15);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_128 = 0xd;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uStack_19c = 6;
    uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_158,uVar6,uVar14);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_168,uVar6,uVar14);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fded8,0x80000000,&local_110,uVar6,uVar14);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uStack_19c = 6;
    local_1a8 = param_1;
    FUN_140e87440(&local_1a8,DAT_1419fdd18,0x80000000,&local_120,uVar6 & 0xffffffffffffff00,
                  uVar14 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    dVar8 = local_120;
    if ((local_114 & 0xffffff) != 0) {
      dVar8 = (double)FUN_140e4b060(&local_120);
    }
    dVar9 = local_110;
    if ((local_104 & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_110);
    }
    dVar10 = local_168;
    if ((uStack_15c & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_168);
    }
    dVar11 = local_158;
    if ((uStack_14c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_158);
    }
    fVar7 = (float)FUN_140e793d0((float)dVar11,(float)dVar10,(float)dVar9,(float)dVar8);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = (double)fVar7;
    local_70 = &local_a8;
    local_1a8 = (longlong *)CONCAT44(uRam00000001419eded4,_DAT_1419eded0);
    uStack_1a0 = uRam00000001419eded8;
    uStack_19c = uRam00000001419ededc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1a8);
    local_68 = local_98;
    puVar4 = (undefined8 *)gml_Script_bm_string_width(param_1,param_2,&local_178,2,&local_70);
    if (puVar4 != &local_148) {
      local_1a8 = (longlong *)*puVar4;
      uStack_1a0 = *(undefined4 *)(puVar4 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1a8);
    }
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_148);
    local_128 = 0xe;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

