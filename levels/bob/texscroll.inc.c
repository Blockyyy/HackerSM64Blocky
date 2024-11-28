void scroll_bob_dl_StartRoom_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 25;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_StartRoom_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob_dl_TTMRoom_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 16;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_TTMRoom_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob_dl_TTMRoom_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 42;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_TTMRoom_mesh_layer_1_vtx_4);

	deltaX = (int)(1.0800000429153442 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_longConveyors_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 32;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_longConveyors_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob_dl_longConveyors_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 12;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_longConveyors_mesh_layer_1_vtx_4);

	deltaX = (int)(1.0800000429153442 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_longConveyors_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 14;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_longConveyors_mesh_layer_1_vtx_5);

	deltaX = (int)(1.0800000429153442 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_longConveyors_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 12;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_longConveyors_mesh_layer_1_vtx_6);

	deltaX = (int)(1.0800000429153442 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_longConveyors_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_longConveyors_mesh_layer_1_vtx_7);

	deltaX = (int)(1.0800000429153442 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_pipeRoom_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 28;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_pipeRoom_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob_dl_onOffRoom_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 67;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_onOffRoom_mesh_layer_1_vtx_0);

	deltaY = (int)(-0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob() {
	scroll_bob_dl_StartRoom_mesh_layer_1_vtx_0();
	scroll_bob_dl_TTMRoom_mesh_layer_1_vtx_0();
	scroll_bob_dl_TTMRoom_mesh_layer_1_vtx_4();
	scroll_bob_dl_longConveyors_mesh_layer_1_vtx_0();
	scroll_bob_dl_longConveyors_mesh_layer_1_vtx_4();
	scroll_bob_dl_longConveyors_mesh_layer_1_vtx_5();
	scroll_bob_dl_longConveyors_mesh_layer_1_vtx_6();
	scroll_bob_dl_longConveyors_mesh_layer_1_vtx_7();
	scroll_bob_dl_pipeRoom_mesh_layer_1_vtx_0();
	scroll_bob_dl_onOffRoom_mesh_layer_1_vtx_0();
};
