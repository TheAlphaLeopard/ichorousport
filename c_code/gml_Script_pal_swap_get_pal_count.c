// gml_Script_pal_swap_get_pal_count @ 0x140445f80

undefined8 *
gml_Script_pal_swap_get_pal_count
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar11;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [64];
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 *local_78;
  undefined8 *local_70 [9];
  
  local_110 = "gml_Script_pal_swap_draw_palette";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 2;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 3;
  pdVar3 = (double *)&DAT_1419df7b0;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_140446067:
    local_128 = *(undefined4 *)puVar1;
    uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_120 = *(undefined4 *)(puVar1 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_128);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_b8) goto LAB_140446067;
  }
  local_78 = &local_b8;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_a8) goto LAB_1404460df;
  }
  local_128 = *(undefined4 *)puVar1;
  uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_120 = *(undefined4 *)(puVar1 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_128);
LAB_1404460df:
  local_70[0] = &local_a8;
  if (param_4 < 4) {
    pdVar2 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar2 = (double *)param_5[3];
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar4 = *pdVar2;
  }
  else {
    dVar4 = (double)FUN_140e4b060();
  }
  if (param_4 < 3) {
    pdVar2 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar2 = (double *)param_5[2];
  }
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar5 = *pdVar2;
  }
  else {
    dVar5 = (double)FUN_140e4b060();
  }
  uVar9 = CONCAT44(uVar11,DAT_141a04808);
  pdVar2 = (double *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar9,local_70);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar6 = *pdVar2;
  }
  else {
    dVar6 = (double)FUN_140e4b060(pdVar2);
  }
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_1419fe728);
  pdVar2 = (double *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar10,ppuVar12);
  uVar11 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  if ((*(uint *)((longlong)pdVar2 + 0xc) & 0xffffff) == 0) {
    dVar7 = *pdVar2;
  }
  else {
    dVar7 = (double)FUN_140e4b060(pdVar2);
  }
  if (0 < param_4) {
    pdVar3 = (double *)*param_5;
  }
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar3;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar3);
  }
  FUN_140ec5ef0(param_1,(longlong)dVar8,0,(float)dVar7,uVar10 & 0xffffffff00000000,
                CONCAT44(uVar11,0x3f800000),(float)dVar6,(float)dVar5,(float)dVar4);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

