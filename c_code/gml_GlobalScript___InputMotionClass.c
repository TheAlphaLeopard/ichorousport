// gml_GlobalScript___InputMotionClass @ 0x1400b2060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputMotionClass(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  local_40 = "gml_Script__ignoreMap@anon@116@__InputKeyIsIgnored@__InputKeyIsIgnored";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 7;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_24 = 0;
  local_30 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 9;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3e8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,0,uVar2,0);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != &local_58) {
    local_b8 = *(undefined4 *)puVar1;
    uStack_b4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    FUN_140041b80(&local_58,&local_b8);
  }
  local_38 = 0xb;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e17e0;
  uStack_b4 = uRam00000001419e17e4;
  uStack_b0 = uRam00000001419e17e8;
  uStack_ac = uRam00000001419e17ec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0xc;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1780;
  uStack_b4 = uRam00000001419e1784;
  uStack_b0 = uRam00000001419e1788;
  uStack_ac = uRam00000001419e178c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0xd;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1840;
  uStack_b4 = uRam00000001419e1844;
  uStack_b0 = uRam00000001419e1848;
  uStack_ac = uRam00000001419e184c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0xe;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e16b0;
  uStack_b4 = uRam00000001419e16b4;
  uStack_b0 = uRam00000001419e16b8;
  uStack_ac = uRam00000001419e16bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0xf;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e15d0;
  uStack_b4 = uRam00000001419e15d4;
  uStack_b0 = uRam00000001419e15d8;
  uStack_ac = uRam00000001419e15dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x11;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1650;
  uStack_b4 = uRam00000001419e1654;
  uStack_b0 = uRam00000001419e1658;
  uStack_ac = uRam00000001419e165c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x15;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1790;
  uStack_b4 = uRam00000001419e1794;
  uStack_b0 = uRam00000001419e1798;
  uStack_ac = uRam00000001419e179c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x2f;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1670;
  uStack_b4 = uRam00000001419e1674;
  uStack_b0 = uRam00000001419e1678;
  uStack_ac = uRam00000001419e167c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x30;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1820;
  uStack_b4 = uRam00000001419e1824;
  uStack_b0 = uRam00000001419e1828;
  uStack_ac = uRam00000001419e182c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x34;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1750;
  uStack_b4 = uRam00000001419e1754;
  uStack_b0 = uRam00000001419e1758;
  uStack_ac = uRam00000001419e175c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x35;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1740;
  uStack_b4 = uRam00000001419e1744;
  uStack_b0 = uRam00000001419e1748;
  uStack_ac = uRam00000001419e174c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x36;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e17b0;
  uStack_b4 = uRam00000001419e17b4;
  uStack_b0 = uRam00000001419e17b8;
  uStack_ac = uRam00000001419e17bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x37;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1770;
  uStack_b4 = uRam00000001419e1774;
  uStack_b0 = uRam00000001419e1778;
  uStack_ac = uRam00000001419e177c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x38;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1730;
  uStack_b4 = uRam00000001419e1734;
  uStack_b0 = uRam00000001419e1738;
  uStack_ac = uRam00000001419e173c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x39;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e15f0;
  uStack_b4 = uRam00000001419e15f4;
  uStack_b0 = uRam00000001419e15f8;
  uStack_ac = uRam00000001419e15fc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x3a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e17d0;
  uStack_b4 = uRam00000001419e17d4;
  uStack_b0 = uRam00000001419e17d8;
  uStack_ac = uRam00000001419e17dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x3b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e17c0;
  uStack_b4 = uRam00000001419e17c4;
  uStack_b0 = uRam00000001419e17c8;
  uStack_ac = uRam00000001419e17cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x3c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e15e0;
  uStack_b4 = uRam00000001419e15e4;
  uStack_b0 = uRam00000001419e15e8;
  uStack_ac = uRam00000001419e15ec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x3d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e16c0;
  uStack_b4 = uRam00000001419e16c4;
  uStack_b0 = uRam00000001419e16c8;
  uStack_ac = uRam00000001419e16cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x3e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1700;
  uStack_b4 = uRam00000001419e1704;
  uStack_b0 = uRam00000001419e1708;
  uStack_ac = uRam00000001419e170c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x40;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1630;
  uStack_b4 = uRam00000001419e1634;
  uStack_b0 = uRam00000001419e1638;
  uStack_ac = uRam00000001419e163c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x41;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e16e0;
  uStack_b4 = uRam00000001419e16e4;
  uStack_b0 = uRam00000001419e16e8;
  uStack_ac = uRam00000001419e16ec;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x42;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1720;
  uStack_b4 = uRam00000001419e1724;
  uStack_b0 = uRam00000001419e1728;
  uStack_ac = uRam00000001419e172c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x43;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1830;
  uStack_b4 = uRam00000001419e1834;
  uStack_b0 = uRam00000001419e1838;
  uStack_ac = uRam00000001419e183c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x44;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1800;
  uStack_b4 = uRam00000001419e1804;
  uStack_b0 = uRam00000001419e1808;
  uStack_ac = uRam00000001419e180c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x45;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1810;
  uStack_b4 = uRam00000001419e1814;
  uStack_b0 = uRam00000001419e1818;
  uStack_ac = uRam00000001419e181c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x46;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e16f0;
  uStack_b4 = uRam00000001419e16f4;
  uStack_b0 = uRam00000001419e16f8;
  uStack_ac = uRam00000001419e16fc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x48;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e16d0;
  uStack_b4 = uRam00000001419e16d4;
  uStack_b0 = uRam00000001419e16d8;
  uStack_ac = uRam00000001419e16dc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x49;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1610;
  uStack_b4 = uRam00000001419e1614;
  uStack_b0 = uRam00000001419e1618;
  uStack_ac = uRam00000001419e161c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x4a;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1690;
  uStack_b4 = uRam00000001419e1694;
  uStack_b0 = uRam00000001419e1698;
  uStack_ac = uRam00000001419e169c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x4b;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1710;
  uStack_b4 = uRam00000001419e1714;
  uStack_b0 = uRam00000001419e1718;
  uStack_ac = uRam00000001419e171c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x4c;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1600;
  uStack_b4 = uRam00000001419e1604;
  uStack_b0 = uRam00000001419e1608;
  uStack_ac = uRam00000001419e160c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x4d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e16a0;
  uStack_b4 = uRam00000001419e16a4;
  uStack_b0 = uRam00000001419e16a8;
  uStack_ac = uRam00000001419e16ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x4e;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1760;
  uStack_b4 = uRam00000001419e1764;
  uStack_b0 = uRam00000001419e1768;
  uStack_ac = uRam00000001419e176c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x50;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e17f0;
  uStack_b4 = uRam00000001419e17f4;
  uStack_b0 = uRam00000001419e17f8;
  uStack_ac = uRam00000001419e17fc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x51;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e17a0;
  uStack_b4 = uRam00000001419e17a4;
  uStack_b0 = uRam00000001419e17a8;
  uStack_ac = uRam00000001419e17ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x52;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1640;
  uStack_b4 = uRam00000001419e1644;
  uStack_b0 = uRam00000001419e1648;
  uStack_ac = uRam00000001419e164c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x53;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1660;
  uStack_b4 = uRam00000001419e1664;
  uStack_b0 = uRam00000001419e1668;
  uStack_ac = uRam00000001419e166c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  uVar2 = CONCAT44(uVar3,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_c8,3,uVar2,&local_78);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38 = 0x55;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_78 = &local_58;
  local_b8 = _DAT_1419e1680;
  uStack_b4 = uRam00000001419e1684;
  uStack_b0 = uRam00000001419e1688;
  uStack_ac = uRam00000001419e168c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_70 = local_98;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_68 = local_88;
  FUN_140e634e0(param_1,param_2,&local_c8,3,CONCAT44(uVar3,DAT_1419ff3d8),&local_78);
  local_38 = 0x58;
  if (&local_58 != param_3) {
    local_b8 = (undefined4)local_58;
    uStack_b4 = local_58._4_4_;
    uStack_b0 = uStack_50;
    uStack_ac = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_30);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

